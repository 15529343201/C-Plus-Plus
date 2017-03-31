#include<iostream>
#include<algorithm>
#include<list>
using namespace std;

int main()
{
	list<int> ilist;
	
	for(int i=1;i<=6;++i)
	{
		ilist.push_front(i);
		ilist.push_back(i);
	}
	
	for(list<int>::iterator iter=ilist.begin();
	    iter!=ilist.end();++iter)
	    cout<<*iter<<" ";
	cout<<endl;
}
