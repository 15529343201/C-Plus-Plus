//顺序容器的操作(7)
/*
赋值与交换(swap)
c1=c2
c1.swap(c2)
c.assign(b,e)
c.assign(n,t)
使用assign：类型兼容即可
使用swap:类型必须相同
*/
#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<string>
using namespace std;

int main()
{
	vector<int> a;
	vector<int> b;
	vector<int> c;
	vector<char *> svec;
	list<string> slist;
	
	svec.push_back("apple");
	svec.push_back("big");
	svec.push_back("cat");
	
	slist.push_back("c");
	slist.push_back("c++");
	slist.push_back("java");
	slist.push_back("c#");
	
	//svec.assign(slist.begin(),slist.end());
	slist.assign(svec.begin(),svec.end());
	
	for(list<string>::iterator iter=slist.begin();
	    iter!=slist.end();++iter)
	    {
	    	cout<<*iter<<" ";
		}
		cout<<endl;
	
	slist.assign(10,"Hiya");
	for(list<string>::iterator iter=slist.begin();
	    iter!=slist.end();++iter)
	    {
	    	cout<<*iter<<" ";
		}
		cout<<endl;
	
	a.push_back(10);
	a.push_back(20);
	a.push_back(30);
	a.push_back(40);
	
	b.push_back(100);
	b.push_back(200);
	b.push_back(300);
	
	c.push_back(1);
	c.push_back(2);
	c.push_back(3);
	c.push_back(4);
	c.push_back(5);
	c.push_back(6);
	
	//交换 
	a.swap(b);
	for(vector<int>::iterator iter=a.begin();
	    iter!=a.end();++iter)
	    {
	    	cout<<*iter<<" ";
		}
		cout<<endl;
	
	//赋值
	a=b; 
	for(vector<int>::iterator iter=a.begin();
	    iter!=a.end();++iter)
	    {
	    	cout<<*iter<<" ";
		}
		cout<<endl;
	
	vector<int>::iterator f=c.begin();
	++f;
	++f;
	vector<int>::iterator e=c.end();
	--e;
	a.assign(f,e);	
	//a.assign(c.begin(),c.end());
	for(vector<int>::iterator iter=a.begin();
	    iter!=a.end();++iter)
	    {
	    	cout<<*iter<<" ";
		}
		cout<<endl;
		
		
	return 0;
 } 
/*
apple big cat
Hiya Hiya Hiya Hiya Hiya Hiya Hiya Hiya Hiya Hiya
100 200 300
10 20 30 40
3 4 5
*/
