#include<iostream>
#include<algorithm>
#include<list>
#include<vector>
using namespace std;

int main()
{
	list<int> ilist;
	vector<int> search;
	
	search.push_back(3);
	search.push_back(4);
	search.push_back(7);
	
	for(int i=1;i<=9;i++)
	  ilist.insert(ilist.end(),i);
	for(list<int>::iterator iter=ilist.begin();
	    iter!=ilist.end();++iter)
	    cout<<*iter<<" ";
	cout<<endl;
	
	if(binary_search(ilist.begin(),ilist.end(),5))
	  cout<<"�ҵ���!"<<endl;
	else
	  cout<<"û�ҵ�!"<<endl;
	  
	if(includes(ilist.begin(),ilist.end(),search.begin(),search.end()))
	  cout<<"���У����ҵ���!"<<endl;
	else
	  cout<<"û���ҵ�!"<<endl;  
	
	
	
	
	return 0;
 } 
/*
1 2 3 4 5 6 7 8 9
�ҵ���!
���У����ҵ���!
*/
