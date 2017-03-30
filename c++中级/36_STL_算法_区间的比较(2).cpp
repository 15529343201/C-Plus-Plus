#include<iostream>
#include<algorithm>
#include<vector>
#include<list>
using namespace std;

int main()
{
	vector<int> ivec;
	list<int> ilist;
	
	for(int i=1;i<=6;++i)
	  ivec.push_back(i);
	
	for(int i=1;i<=16;i*=2)
	  ilist.push_back(i);
	ilist.push_back(3);
	
	for(vector<int>::iterator iter=ivec.begin();
	    iter!=ivec.end();++iter)
	    cout<<*iter<<" ";
	cout<<endl;
	
	for(list<int>::iterator iter=ilist.begin();
	    iter!=ilist.end();++iter)
	    cout<<*iter<<" ";
	cout<<endl; 
	
	pair<vector<int>::iterator,list<int>::iterator> values;
	values=mismatch(ivec.begin(),ivec.end(),ilist.begin());
	if(values.first==ivec.end())
	{
		cout<<"û���ҵ�����ȵ���:no mismatch"<<endl;
	}
	else
	{
		cout<<"first mismatch: "<<*values.first
		<<" and "<<*values.second<<endl;
	}
	
	values=mismatch(ivec.begin(),ivec.end(),ilist.begin(),less_equal<int>());
	if(values.first==ivec.end())
	  cout<<"û�ҵ�!(alaways less or equal!)"<<endl;
	else
	  cout<<"�ҵ���:һ����һ���������ڵڶ�������: "<<*values.first
	      <<" , "<<*values.second<<endl;
	return 0;
 } 
/*
1 2 3 4 5 6
1 2 4 8 16 3
first mismatch: 3 and 4
�ҵ���:һ����һ���������ڵڶ�������: 6 , 3
*/
