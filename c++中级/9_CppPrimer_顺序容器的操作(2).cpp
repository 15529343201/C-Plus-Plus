//顺序容器的操作(2)
/*
在顺序容器中添加元素
c.push_back(t)
c.push_front(t)
c.insert(p,t)
c.insert(p,n,t)
c.insert(p,b,e)
容器元素都是副本
添加元素可能会使迭代器失效
避免存储end操作返回的迭代器
*/ 
#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<string>
using namespace std;

int main()
{
	vector<string> svec;
	list<string> slist;
	deque<string> sdeq;
	
	svec.push_back("Bill");
	svec.push_back("Tom");
	svec.push_back("Mary");
	
	slist.push_back("Bill");
	slist.push_back("Tom");
	slist.push_back("Mary");
	
	sdeq.push_back("Bill");
	sdeq.push_back("Tom");
	sdeq.push_back("Mary");
	
	slist.push_front("Primer");
	slist.push_front("C++");
	
	sdeq.push_front("Primer");
	sdeq.push_front("C++");
	
	for(list<string>::iterator iter=slist.begin();
	    iter!=slist.end();++iter)
	    {
	    	cout<<*iter<<" ";
		}
		cout<<endl;
		
	list<string>::iterator it=slist.begin();
	cout<<*it<<endl;
	++it;
	cout<<*it<<endl;
	
	slist.insert(it,"hello");//插入 
	for(list<string>::iterator iter=slist.begin();
	    iter!=slist.end();++iter)
	    {
	    	cout<<*iter<<" ";
		}
		cout<<endl;
		
	slist.insert(it,10,"hi");//插入 
	for(list<string>::iterator iter=slist.begin();
	    iter!=slist.end();++iter)
	    {
	    	cout<<*iter<<" ";
		}
		cout<<endl;

    string sarray[4]={"qusai","simba","frollo","scar"};
    it=slist.begin();
    cout<<*it<<endl;
    ++it;
    cout<<*it<<endl;
    slist.insert(it,sarray+1,sarray+3);
    for(list<string>::iterator iter=slist.begin();
	    iter!=slist.end();++iter)
	    {
	    	cout<<*iter<<" ";
		}
		cout<<endl;
		
	list<int> ilst;
	ilst.push_back(10);
	ilst.push_back(20);
	ilst.push_back(30);
	
	list<int>::iterator first=ilst.begin();
	//vector<int>::iterator last=ivec.end();
	
	//while(first!=last)
	while(first!=ilst.end())
	{
		ilst.insert(first,42);
		++first;
	}
	for(list<int>::iterator i=ilst.begin();
	    i!=ilst.end();++i)
	    {
	    	cout<<*i<<" ";
		}
		cout<<endl;
	return 0;
}
/*
程序运行结果: 
C++ Primer Bill Tom Mary
C++
Primer
C++ hello Primer Bill Tom Mary
C++ hello hi hi hi hi hi hi hi hi hi hi Primer Bill Tom Mary
C++
hello
C++ simba frollo hello hi hi hi hi hi hi hi hi hi hi Primer Bill Tom Mary
42 10 42 20 42 30
*/
