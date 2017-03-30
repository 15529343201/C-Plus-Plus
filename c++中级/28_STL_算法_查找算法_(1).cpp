#include<iostream>
#include<vector>
#include<functional>
#include<algorithm>
#include<list>
using namespace std;

int main()
{
	list<int> ilist;
	for(int i=1;i<=9;i++)
	  ilist.insert(ilist.end(),i);
	for(int i=1;i<=9;i++)
	  ilist.insert(ilist.end(),i);
	  
	for(list<int>::iterator iter=ilist.begin();
	    iter!=ilist.end();++iter)
	      cout<<*iter<<" ";
	cout<<endl;
	
	list<int>::iterator pos1;
	pos1=find(ilist.begin(),ilist.end(),4);
	
	list<int>::iterator pos2;
	if(pos1!=ilist.end())
	{
		pos2=find(++pos1,ilist.end(),4);
	}
	
	if(pos1!=ilist.end() && pos2!=ilist.end())
	{
		--pos1;
		++pos2;
		for(list<int>::iterator iter=pos1;
		    iter!=pos2;++iter)
		    {
		    	cout<<*iter<<" ";
			}
	}
	  
	
	
	
	return 0;
 } 

#include<iostream>
#include<algorithm>
#include<vector>
#include<functional>
using namespace std;

int main()
{
	vector<int> ivec;
	vector<int>::iterator pos;
	
	for(int i=1;i<=9;++i)
	  ivec.push_back(i);
	  
	for(vector<int>::iterator iter=ivec.begin();
	    iter!=ivec.end();++iter)
	      cout<<*iter<<" ";
	    cout<<endl;
	    
    pos=find_if(ivec.begin(),ivec.end(),bind2nd(greater<int>(),3));
    cout<<*pos<<endl;
}
/*
1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9
4 5 6 7 8 9 1 2 3 4

1 2 3 4 5 6 7 8 9
4

*/

