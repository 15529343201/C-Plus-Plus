//顺序容器的操作
/*
容器大小的操作
c.size()
c.max_size()
c.empty()
c.resize(n)
c.resize(n,t)
注意:resize操作可能会使迭代器失效 
*/ 
#include<iostream>
#include<vector>
#include<list>
#include<deque>
using namespace std;

int main()
{
	list<int> ilist;
	ilist.push_back(10);
	ilist.push_back(20);
	ilist.push_back(30);
	
	cout<<"容器里数据的个数: "<<ilist.size()<<endl;
	
	list<int>::size_type count=ilist.size();
	cout<<"容器里数据的个数: "<<count<<endl;
	
	cout<<"容器的max_size: "<<ilist.max_size()<<endl;
	
	if(ilist.empty())
	  cout<<"容器是空的!"<<endl;
	else
	  cout<<"容器不是空的!"<<endl;
	
	//调整大小为10 
	ilist.resize(10);
	for(list<int>::iterator iter=ilist.begin();
	    iter!=ilist.end();++iter)
	    {
	    	cout<<*iter<<" ";
		}
		cout<<endl;
	
	ilist.resize(20,6);
	for(list<int>::iterator iter=ilist.begin();
	    iter!=ilist.end();++iter)
	    {
	    	cout<<*iter<<" ";
		}
		cout<<endl;
	
	//减少 
	ilist.resize(2);
	for(list<int>::iterator iter=ilist.begin();
	    iter!=ilist.end();++iter)
	    {
	    	cout<<*iter<<" ";
		}
		cout<<endl;
	
	ilist.resize(0);
	if(ilist.empty())
	  cout<<"容器是空的!"<<endl;
	else
	  cout<<"容器不是空的!"<<endl;
	
	
	vector<int> ivec(10,42);
	ivec.resize(15);
	ivec.resize(25,-1);
	ivec.resize(5);
	
	return 0;
}
/*
容器里数据的个数: 3
容器里数据的个数: 3
容器的max_size: 768614336404564650
容器不是空的!
10 20 30 0 0 0 0 0 0 0
10 20 30 0 0 0 0 0 0 0 6 6 6 6 6 6 6 6 6 6
10 20
容器是空的!
*/
