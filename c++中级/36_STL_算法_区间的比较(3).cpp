#include<iostream>
#include<algorithm>
#include<list>
#include<vector>
using namespace std;

void printCollection(const list<int>& l)
{
	for(list<int>::const_iterator iter=l.begin();iter!=l.end();++iter)
	    cout<<*iter<<" ";
	cout<<endl;
}

bool lessForCollection(const list<int>& list1,const list<int>& list2)
{
	return lexicographical_compare(list1.begin(),
	   list1.end(),list2.begin(),list2.end());
}

int main()
{
	list<int> c1,c2,c3,c4;
	for(int i=1;i<=5;++i)
	  c1.push_back(i);
	
	c4=c3=c2=c1;
	
	c1.push_back(7);
	c3.push_back(2);
	c3.push_back(0);
	c4.push_back(2);
	
	
	printCollection(c1);
	printCollection(c2);
	printCollection(c3);
	printCollection(c4);
	
	if(lexicographical_compare(c4.begin(),c4.end(),c1.begin(),c1.end()))
	  cout<<"c4小于c1"<<endl;
	else
	  cout<<"c4大于等于c1"<<endl;
	
	if(lexicographical_compare(c4.begin(),c4.end(),c3.begin(),c3.end()))
	  cout<<"c4小于c3"<<endl;
	else
	  cout<<"c4不小于c3"<<endl; 
	  
	cout<<endl<<endl;
	  
	vector< list<int> > cc;
	
	cc.push_back(c1);
	cc.push_back(c2);
	cc.push_back(c3);
	cc.push_back(c4);
	cc.push_back(c3);
	cc.push_back(c1);
	cc.push_back(c4);
	cc.push_back(c2);
	
	for_each(cc.begin(),cc.end(),printCollection);
	cout<<endl;
	
	sort(cc.begin(),cc.end(),lessForCollection);
	
	for_each(cc.begin(),cc.end(),printCollection);
	cout<<endl;
	return 0;
}
/*
1 2 3 4 5 7
1 2 3 4 5
1 2 3 4 5 2 0
1 2 3 4 5 2
c4小于c1
c4小于c3


1 2 3 4 5 7
1 2 3 4 5
1 2 3 4 5 2 0
1 2 3 4 5 2
1 2 3 4 5 2 0
1 2 3 4 5 7
1 2 3 4 5 2
1 2 3 4 5

1 2 3 4 5
1 2 3 4 5
1 2 3 4 5 2
1 2 3 4 5 2
1 2 3 4 5 2 0
1 2 3 4 5 2 0
1 2 3 4 5 7
1 2 3 4 5 7
*/
