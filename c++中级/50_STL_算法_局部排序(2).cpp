#include<iostream>
#include<algorithm>
#include<deque>
#include<vector>
#include<iterator>
using namespace std;

int main()
{
	deque<int> ideq;
	vector<int> ivec6(6);
	vector<int> ivec30(30);
	
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
	
	partial_sort_copy(ideq.begin(),ideq.end(),ivec6.begin(),ivec6.end());
	copy(ivec6.begin(),ivec6.end(),ostream_iterator<int>(cout," "));
	
	partial_sort_copy(ideq.begin(),ideq.end(),ivec30.begin(),ivec30.end(),greater<int>());
	copy(ivec30.begin(),ivec30.end(),ostream_iterator<int>(cout," "));
	cout<<endl;
	
    vector<int>::iterator pos;
	pos=partial_sort_copy(ideq.begin(),ideq.end(),ivec30.begin(),ivec30.end(),greater<int>());
	copy(ivec30.begin(),pos,ostream_iterator<int>(cout," "));
	cout<<endl;
	return 0;
}
/*
3 4 5 6 7 2 3 4 5 6 1 2 3 4 5
1 2 2 3 3 3 7 6 6 5 5 5 4 4 4 3 3 3 2 2 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
7 6 6 5 5 5 4 4 4 3 3 3 2 2 1
*/
