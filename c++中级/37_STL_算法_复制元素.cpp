/*
copy()
copy_backward()
*/ 
#include<iostream>
#include<algorithm>
#include<list>
#include<vector>
using namespace std;

int main()
{
	list<int> ilist;
	for(int i=0;i<10;++i)
	  ilist.push_back(i);
	for(list<int>::iterator iter=ilist.begin();
	    iter!=ilist.end();++iter)
	    cout<<*iter<<" ";
	cout<<endl;
	
	vector<int> ivec(ilist.size()*2);
	for(vector<int>::iterator iter=ivec.begin();
	    iter!=ivec.end();++iter)
	    cout<<*iter<<" ";
	cout<<endl;
	
	copy(ilist.begin(),ilist.end(),ivec.begin());
	for(vector<int>::iterator iter=ivec.begin();
	    iter!=ivec.end();++iter)
	    cout<<*iter<<" ";
	cout<<endl;
	
	copy_backward(ilist.begin(),ilist.end(),ivec.end());
	for(vector<int>::iterator iter=ivec.begin();
	    iter!=ivec.end();++iter)
	    cout<<*iter<<" ";
	cout<<endl;
	
	
	return 0;
 } 
/*
0 1 2 3 4 5 6 7 8 9
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
0 1 2 3 4 5 6 7 8 9 0 0 0 0 0 0 0 0 0 0
0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9
*/
