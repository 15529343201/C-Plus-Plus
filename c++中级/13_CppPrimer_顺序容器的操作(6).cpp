//˳�������Ĳ���(6)
/*
ɾ��Ԫ��
c.erase(p)
c.erase(b,e)
c.clear()
c.pop_back()
c.pop_front()
ע��:c.pop_front()ֻ������list��deque������
*/
#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<algorithm>
using namespace std;

int main()
{
	list<string> slist;
	slist.push_back("apple");
	slist.push_back("bill");
	slist.push_back("cat");
	slist.push_back("dog");
	slist.push_back("egg");
	slist.push_back("fish");
	slist.push_back("girl");
	
	//ɾ��
	slist.pop_front();
	slist.pop_back();
	
	string s1("dog");
	string s2("fish");
	
	//����
	list<string>::iterator iter1=find(slist.begin(),slist.end(),s1);
	list<string>::iterator iter2=find(slist.begin(),slist.end(),s2);
	if(iter1!=slist.end() && iter2!=slist.end())
	  slist.erase(iter1,iter2);//ǰ���󲻰� 
	else
	  cout<<"û�ҵ�!"<<endl;
	
	//ɾ������Ԫ�� 
	slist.clear();
	slist.erase(slist.begin(),slist.end());
	
	if(!slist.empty())
	for(list<string>::iterator iter=slist.begin();
	    iter!=slist.end();++iter)
	    {
	    	cout<<*iter<<" ";
		}
	else
	   cout<<"�����ǿյ�"<<endl; 
	cout<<endl;
	return 0;
}
/*
�����ǿյ�
*/
 
