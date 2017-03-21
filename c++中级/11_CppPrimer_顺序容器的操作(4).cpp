//˳�������Ĳ���
/*
������С�Ĳ���
c.size()
c.max_size()
c.empty()
c.resize(n)
c.resize(n,t)
ע��:resize�������ܻ�ʹ������ʧЧ 
*/ 
#include<iostream>
#include<vector>
#include<list>
#include<deque>
using namespace std;

int main()
{
	list<int> ilist;
	ilist.push_back(10);
	ilist.push_back(20);
	ilist.push_back(30);
	
	cout<<"���������ݵĸ���: "<<ilist.size()<<endl;
	
	list<int>::size_type count=ilist.size();
	cout<<"���������ݵĸ���: "<<count<<endl;
	
	cout<<"������max_size: "<<ilist.max_size()<<endl;
	
	if(ilist.empty())
	  cout<<"�����ǿյ�!"<<endl;
	else
	  cout<<"�������ǿյ�!"<<endl;
	
	//������СΪ10 
	ilist.resize(10);
	for(list<int>::iterator iter=ilist.begin();
	    iter!=ilist.end();++iter)
	    {
	    	cout<<*iter<<" ";
		}
		cout<<endl;
	
	ilist.resize(20,6);
	for(list<int>::iterator iter=ilist.begin();
	    iter!=ilist.end();++iter)
	    {
	    	cout<<*iter<<" ";
		}
		cout<<endl;
	
	//���� 
	ilist.resize(2);
	for(list<int>::iterator iter=ilist.begin();
	    iter!=ilist.end();++iter)
	    {
	    	cout<<*iter<<" ";
		}
		cout<<endl;
	
	ilist.resize(0);
	if(ilist.empty())
	  cout<<"�����ǿյ�!"<<endl;
	else
	  cout<<"�������ǿյ�!"<<endl;
	
	
	vector<int> ivec(10,42);
	ivec.resize(15);
	ivec.resize(25,-1);
	ivec.resize(5);
	
	return 0;
}
/*
���������ݵĸ���: 3
���������ݵĸ���: 3
������max_size: 768614336404564650
�������ǿյ�!
10 20 30 0 0 0 0 0 0 0
10 20 30 0 0 0 0 0 0 0 6 6 6 6 6 6 6 6 6 6
10 20
�����ǿյ�!
*/
