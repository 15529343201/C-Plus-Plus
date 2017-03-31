//STL算法-删除算法(3)
/*
unique(b,e)
unique(b,e,p)
unique_copy(b1,e1,b2)
unique_copy(b1,e1,b2,p)
注意:
  1.应该有一个unique_if(),但是没有
  2.应该有一个unique_copy_if(),但是没有 
*/ 
#include<iostream>
#include<iterator>
#include<algorithm>
#include<list>
using namespace std;

bool differenceOne(int elem1,int elem2)
{
	return elem1+1==elem2 || elem1-1==elem2;
}

int main()
{
	int source[]={1,4,4,6,1,2,2,3,1,6,6,6,5,7,5,4,4};
	int sourceNum=sizeof(source)/sizeof(source[0]);
	
	list<int> ilist;
	copy(source,source+sourceNum,back_inserter(ilist));
	
	for(list<int>::iterator iter=ilist.begin();
	  iter!=ilist.end();++iter)
	  cout<<*iter<<" ";
	cout<<endl;
	
	list<int>::iterator pos;
	pos=unique(ilist.begin(),ilist.end());
	
	for(list<int>::iterator iter=ilist.begin();
	  iter!=pos;++iter)
	  cout<<*iter<<" ";
	cout<<endl;
	
	
	copy(source,source+sourceNum,ilist.begin());
	for(list<int>::iterator iter=ilist.begin();
	  iter!=ilist.end();++iter)
	  cout<<*iter<<" ";
	cout<<endl;
	
	pos=unique(ilist.begin(),ilist.end(),greater<int>());
	for(list<int>::iterator iter=ilist.begin();
	  iter!=pos;++iter)
	  cout<<*iter<<" ";
	cout<<endl;
	
	copy(source,source+sourceNum,ilist.begin());
	for(list<int>::iterator iter=ilist.begin();
	  iter!=ilist.end();++iter)
	  cout<<*iter<<" ";
	cout<<endl;
	unique_copy(ilist.begin(),ilist.end(),ostream_iterator
	<int>(cout," "));
	cout<<endl;
	
	unique_copy(ilist.begin(),ilist.end(),ostream_iterator<int>(cout," "),differenceOne);
	return 0;
} 

