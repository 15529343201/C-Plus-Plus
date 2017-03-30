#include<iostream>
#include<algorithm>
#include<deque>
#include<functional> 
using namespace std; 

int main()
{
	deque<int> ideq;
	for(int i=1;i<=9;i++)
	{
		if(i==3)
		{
			ideq.push_back(i);
			ideq.push_back(i);
			ideq.push_back(i);
			ideq.push_back(i);
		}
		else
		{
			ideq.push_back(i);
		}
	
    }
	  
	
	for(deque<int>::iterator iter=ideq.begin();
	    iter!=ideq.end();++iter)
	      cout<<*iter<<" ";
	    cout<<endl;
	
	deque<int>::iterator pos;
	pos=search_n(ideq.begin(),ideq.end(),4,3);
	if(pos!=ideq.end())
	{
		cout<<"找到连续的4个3,序号位置: "<<distance(ideq.begin(),pos)+1<<endl;
	
	}
	else
	{
		cout<<"没找到!"<<endl;
	}
	
	pos=search_n(ideq.begin(),ideq.end(),3,6,greater<int>());
	if(pos!=ideq.end())
	  cout<<"找到了连续的3个大于6的数,start with "<<distance(ideq.begin(),pos)+1<<endl;
	else
	  cout<<"没找到!";
	
	
	return 0;
} 
/*
1 2 3 3 3 3 4 5 6 7 8 9
找到连续的4个3,序号位置: 3
找到了连续的3个大于6的数,start with 10
*/
