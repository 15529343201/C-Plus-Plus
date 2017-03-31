//STLËã·¨-É¾³ıËã·¨(2)
/*
remove_copy()
remove_copy_if()
*/
#include<iostream>
#include<algorithm>
#include<iterator>
#include<list>
#include<set>
using namespace std;

int main()
{
	list<int> ilist;
	
	for(int i=1;i<=6;++i)
	  ilist.push_back(i);
	for(int i=1;i<=9;++i)
	  ilist.push_back(i);
	
	for(list<int>::iterator iter=ilist.begin();
	    iter!=ilist.end();++iter)
	    cout<<*iter<<" ";
	cout<<endl;
	
	multiset<int> iset;
	remove_copy_if(ilist.begin(),ilist.end(),
	  inserter(iset,iset.end()),
	  bind2nd(less<int>(),4));
	
	for(multiset<int>::iterator iter=iset.begin();
	    iter!=iset.end();++iter)
	    cout<<*iter<<" ";
	cout<<endl;
	
	remove_copy(ilist.begin(),ilist.end(),
	  ostream_iterator<int>(cout," "),3);
	cout<<endl;
	
	remove_copy_if(ilist.begin(),ilist.end(),
	  ostream_iterator<int>(cout," "),bind2nd(greater<int>(),4));
	cout<<endl;
	return 0;
}
/*
1 2 3 4 5 6 1 2 3 4 5 6 7 8 9
4 4 5 5 6 6 7 8 9
1 2 4 5 6 1 2 4 5 6 7 8 9
1 2 3 4 1 2 3 4
*/
