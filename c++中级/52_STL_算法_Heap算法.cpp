//STLËã·¨-HeapËã·¨
/*
make_heap()
push_heap()
pop_heap()
sort_heap()
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	vector<int> ivec;
	
	for(int i=3;i<=7;++i)
	  ivec.push_back(i);
	for(int i=5;i<=9;++i)
	  ivec.push_back(i);
	for(int i=1;i<=4;++i)
	  ivec.push_back(i);
	
	for(vector<int>::iterator iter=ivec.begin();
	  iter!=ivec.end();++iter)
	  cout<<*iter<<" ";
	cout<<endl;
	
	make_heap(ivec.begin(),ivec.end());
	for(vector<int>::iterator iter=ivec.begin();
	  iter!=ivec.end();++iter)
	  cout<<*iter<<" ";
	cout<<endl;
	
	pop_heap(ivec.begin(),ivec.end()); 
	for(vector<int>::iterator iter=ivec.begin();
	  iter!=ivec.end();++iter)
	  cout<<*iter<<" ";
	cout<<endl;
	
	ivec.pop_back();
	for(vector<int>::iterator iter=ivec.begin();
	  iter!=ivec.end();++iter)
	  cout<<*iter<<" ";
	cout<<endl;
	
	ivec.push_back(17);
	for(vector<int>::iterator iter=ivec.begin();
	  iter!=ivec.end();++iter)
	  cout<<*iter<<" ";
	cout<<endl;
	
	push_heap(ivec.begin(),ivec.end());
	for(vector<int>::iterator iter=ivec.begin();
	  iter!=ivec.end();++iter)
	  cout<<*iter<<" ";
	cout<<endl;
	
	sort_heap(ivec.begin(),ivec.end());
	for(vector<int>::iterator iter=ivec.begin();
	  iter!=ivec.end();++iter)
	  cout<<*iter<<" ";
	cout<<endl;
	return 0;
}
/*
3 4 5 6 7 5 6 7 8 9 1 2 3 4
9 8 6 7 7 5 5 3 6 4 1 2 3 4
8 7 6 7 4 5 5 3 6 4 1 2 3 9
8 7 6 7 4 5 5 3 6 4 1 2 3
8 7 6 7 4 5 5 3 6 4 1 2 3 17
17 7 8 7 4 5 6 3 6 4 1 2 3 5
1 2 3 3 4 4 5 5 6 6 7 7 8 17
*/
