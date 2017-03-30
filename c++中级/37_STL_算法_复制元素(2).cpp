#include<iostream>
#include<algorithm>
#include<list>
#include<vector>
#include<iterator>
using namespace std;

int main()
{
	vector<int> ivec;
	list<int> ilist;
	
	for(int i=1;i<=9;++i)
	  ivec.push_back(i);
	  
	copy(ivec.begin(),ivec.end(),back_inserter(ilist));
	for(list<int>::iterator iter=ilist.begin();
	    iter!=ilist.end();++iter)
	    cout<<*iter<<" ";
	cout<<endl;
	
	copy(ivec.begin(),ivec.end(),ostream_iterator<int>(cout," "));
	cout<<endl;
	
	copy(ivec.rbegin(),ivec.rend(),ilist.begin());
	copy(ilist.begin(),ilist.end(),ostream_iterator<int>(cout," "));
	return 0;
}
/*
1 2 3 4 5 6 7 8 9
1 2 3 4 5 6 7 8 9
9 8 7 6 5 4 3 2 1
*/
