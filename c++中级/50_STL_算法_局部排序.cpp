//STLÀ„∑®-æ÷≤øpaixu
/*
partial_sort(b,se,e)
partial_sort(b,se,e,p)
partial_sort_copy(sb,se,db,de)
partial_sort_copy(sb,se,db,de,p)
*/
#include<iostream>
#include<algorithm>
#include<deque>
#include<functional>
using namespace std;

int main()
{
	deque<int> ideq;
	
	for(int i=3;i<=7;++i)
	  ideq.push_back(i);
	for(int i=2;i<=6;++i)
	  ideq.push_back(i);
	for(int i=1;i<=5;i++)
	  ideq.push_back(i);
	
	for(deque<int>::iterator iter=ideq.begin();
	  iter!=ideq.end();++iter)
	  cout<<*iter<<" ";
	cout<<endl;
	
	partial_sort(ideq.begin(),ideq.begin()+5,ideq.end());
	for(deque<int>::iterator iter=ideq.begin();
	  iter!=ideq.end();++iter)
	  cout<<*iter<<" ";
	cout<<endl;
	
	partial_sort(ideq.begin(),ideq.begin()+5,ideq.end(),greater<int>());
	for(deque<int>::iterator iter=ideq.begin();
	  iter!=ideq.end();++iter)
	  cout<<*iter<<" ";
	cout<<endl;
	
	
	return 0;
}
