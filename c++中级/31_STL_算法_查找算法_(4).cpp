#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<list>
using namespace std;

int main()
{
	vector<int> ivec;
	list<int> searchList;
	for(int i=1;i<=11;++i)
	  ivec.push_back(i);
	for(vector<int>::iterator iter=ivec.begin();
	    iter!=ivec.end();++iter)
	    cout<<*iter<<" ";
	cout<<endl; 
	
	searchList.push_back(33);
	searchList.push_back(6);
	searchList.push_back(9);
	
	
	vector<int>::iterator pos;
	pos=find_first_of(ivec.begin(),ivec.end(),searchList.begin(),searchList.end());
	if(pos!=ivec.end())
	  cout<<"�ҵ���,λ��:"<<distance(ivec.begin(),pos)+1<<endl;
	else
	  cout<<"û�ҵ�!"<<endl;
	
	vector<int>::reverse_iterator rpos;
	rpos=find_first_of(ivec.rbegin(),ivec.rend(),searchList.begin(),searchList.end());
	cout<<"�ҵ���λ��: "<<distance(ivec.begin(),rpos.base())<<endl;
	
	string numerics("0123456789");
	string name("ra8d3wp6hk");
	string::size_type p=name.find_first_of(numerics);
	if(p!=string::npos)
	  cout<<"�ҵ��ˣ��±�: "<<p<<endl;
	else
	  cout<<"û�ҵ�!"<<endl;
	  
	p=name.find_last_of(numerics);
	if(p!=string::npos)
	  cout<<"�ҵ��ˣ��±�: "<<p<<endl;
	else
	  cout<<"û�ҵ�!"<<endl;
	
	return 0;
}
/*
1 2 3 4 5 6 7 8 9 10 11
�ҵ���,λ��:6
�ҵ���λ��: 9
�ҵ��ˣ��±�: 2
�ҵ��ˣ��±�: 7
*/
