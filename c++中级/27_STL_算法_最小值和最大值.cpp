#include<iostream>
#include<algorithm>
#include<deque>
using namespace std;

bool absLess(int elem1,int elem2)
{
	return abs(elem1)<abs(elem2);
}
int main()
{
	deque<int> ideq;
	for(int i=2;i<=8;++i)
	  ideq.insert(ideq.end(),i);
	for(int i=-3;i<=5;++i)
	  ideq.insert(ideq.end(),i);
	
	for(deque<int>::iterator iter=ideq.begin();
	    iter!=ideq.end();++iter)
	    {
	    	cout<<*iter<<" ";
		}
		cout<<endl;
		
	deque<int>::iterator result=min_element(ideq.begin(),ideq.end());	
	cout<<"最小值: "<<*result<<endl;
	cout<<"最大值: "<<*max_element(ideq.begin(),ideq.end());
	cout<<endl;
	
	cout<<"绝对最小值: "<<*min_element(ideq.begin(),ideq.end(),absLess);
	cout<<"绝对最大值: "<<*max_element(ideq.begin(),ideq.end(),absLess);
}
/*
2 3 4 5 6 7 8 -3 -2 -1 0 1 2 3 4 5
最小值: -3
最大值: 8
绝对最小值: 0绝对最大值: 8
*/

