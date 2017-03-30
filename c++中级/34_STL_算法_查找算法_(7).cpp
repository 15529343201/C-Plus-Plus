//������������㷨 
#include<iostream>
#include<algorithm>
#include<list>
#include<set>
using namespace std;

int main()
{
	list<int> ilist;
	multiset<int> imset;
	
	imset.lower_bound(5);
	imset.upper_bound(5);
	imset.equal_range(5);
	
	for(int i=1;i<=9;i++)
	  ilist.insert(ilist.end(),i);
	for(int i=1;i<=9;i++)
	  ilist.insert(ilist.end(),i);
	ilist.sort();
	
	for(list<int>::iterator iter=ilist.begin();
	    iter!=ilist.end();++iter)
	    cout<<*iter<<" ";
	cout<<endl;
	
	list<int>::iterator pos1,pos2;
	
	pos1=lower_bound(ilist.begin(),ilist.end(),5);
	pos2=upper_bound(ilist.begin(),ilist.end(),5);
	cout<<"��һ��5��λ��: "<<distance(ilist.begin(),pos1)+1<<endl;
	cout<<"����5�ĵ�һ��λ��: "<<distance(ilist.begin(),pos2)+1<<endl;
	 
	ilist.insert(lower_bound(ilist.begin(),ilist.end(),5),5);
	ilist.insert(upper_bound(ilist.begin(),ilist.end(),5),5);
	
	for(list<int>::iterator iter=ilist.begin();
	    iter!=ilist.end();++iter)
	    cout<<*iter<<" ";
	cout<<endl;
	
	pair<list<int>::iterator,list<int>::iterator> range;
	range=equal_range(ilist.begin(),ilist.end(),5);
	cout<<distance(ilist.begin(),range.first)+1<<endl;
	cout<<distance(ilist.begin(),range.second)+1<<endl;
}
/*
1 1 2 2 3 3 4 4 5 5 6 6 7 7 8 8 9 9
��һ��5��λ��: 9
����5�ĵ�һ��λ��: 11
1 1 2 2 3 3 4 4 5 5 5 5 6 6 7 7 8 8 9 9
9
13
*/
