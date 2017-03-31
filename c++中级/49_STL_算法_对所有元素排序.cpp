//STL算法-对所有元素排序
/*
sort(b,e)
sotr(b,e,p)
stable_sort(b,e)
stable_sort(b,e,p)
注意;
  不适用于list容器，list有成员函数sort()
*/
#include<iostream>
#include<algorithm>
#include<deque>
using namespace std;

int main()
{
	deque<int> ideq;
	
	for(int i=1;i<=9;++i)
	  ideq.push_back(i);
	for(int i=1;i<=9;++i)
	  ideq.push_back(i);
	  
	sort(ideq.begin(),ideq.end());
	  
	for(deque<int>::iterator iter=ideq.begin();
	  iter!=ideq.end();++iter)
	  cout<<*iter<<" ";
	cout<<endl;
	
	sort(ideq.begin(),ideq.end(),greater<int>());
	for(deque<int>::iterator iter=ideq.begin();
	  iter!=ideq.end();++iter)
	  cout<<*iter<<" ";
	cout<<endl;
	return 0;
}
