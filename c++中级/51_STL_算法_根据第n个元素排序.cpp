//STL算法-根据第n个元素排序
/*
nth_element(b,n,e)
nth_element(b,n,e,p)
对比:partition()算法 
*/ 
#include<iostream>
#include<functional>
#include<iterator>
#include<algorithm>
#include<deque>
using namespace std;

int main()
{
	deque<int> ideq;
	
	for(int i=3;i<=7;++i)
	  ideq.push_back(i);
	for(int i=2;i<=6;++i)
	  ideq.push_back(i);
	for(int i=1;i<=5;++i)
	  ideq.push_back(i);
	
	for(deque<int>::iterator iter=ideq.begin();
	  iter!=ideq.end();++iter)
	  cout<<*iter<<" ";
	cout<<endl;
	
	nth_element(ideq.begin(),ideq.begin()+3,ideq.end());
	
	copy(ideq.begin(),ideq.begin()+4,
	  ostream_iterator<int>(cout," "));
	cout<<endl;
	
	nth_element(ideq.begin(),ideq.end()-4,ideq.end());
	copy(ideq.end()-4,ideq.end(),
	  ostream_iterator<int>(cout," "));
	cout<<endl;
	
	nth_element(ideq.begin(),ideq.begin()+3,ideq.end(),
	  greater<int>());
	copy(ideq.begin(),ideq.begin()+4,
	  ostream_iterator<int>(cout," "));
	cout<<endl;
	
	deque<int>::iterator pos;
	pos=partition(ideq.begin(),ideq.end(),
	  bind2nd(less_equal<int>(),3));
	copy(ideq.begin(),pos,
	  ostream_iterator<int>(cout," "));
	
	return 0;
} 
/*
3 4 5 6 7 2 3 4 5 6 1 2 3 4 5
2 1 2 3
5 6 6 7
6 7 6 5
1 2 2 3 3 3
*/
