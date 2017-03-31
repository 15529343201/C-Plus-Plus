#include<iostream>
#include<algorithm>
#include<iterator>
#include<set>
using namespace std;

int main()
{
	set<int> iset;
	for(int i=1;i<=9;++i)
	  iset.insert(i);
    for(set<int>::iterator iter=iset.begin();
	  iter!=iset.end();++iter)
	  cout<<*iter<<" ";
	cout<<endl;
	
	set<int>::iterator pos=iset.begin();
	//pos=pos+4;set≤ªø…“‘ 
	advance(pos,4);
	rotate_copy(iset.begin(),pos,iset.end(),ostream_iterator<int>(cout," "));
	cout<<endl;
	
	pos=iset.end();
	advance(pos,-2);
	rotate_copy(iset.begin(),pos,iset.end(),ostream_iterator<int>(cout," "));
	cout<<endl;
	
	rotate_copy(iset.begin(),iset.find(4),iset.end(),ostream_iterator<int>(cout," "));
	cout<<endl;
	return 0;



}
