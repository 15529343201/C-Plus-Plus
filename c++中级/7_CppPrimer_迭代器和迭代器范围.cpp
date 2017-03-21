//迭代器和迭代器范围
/*
每一种容器都有自己的迭代器
所有的迭代器接口都是一样的
在整个标准库中，经常使用形参为一对迭代器的构造函数
常用的迭代器操作
*iter,++iter,--iter,iter1==iter2,iter1!=iter2
vector和deque容器的迭代器的额外操作
iter+n,iter-n,>,>=,<,<=
迭代器范围
begin/end,first/last
使迭代器失效的容器操作
*/
#include<iostream>
#include<vector>
#include<deque>
#include<list>
using namespace std;

int main()
{
	vector<int> a;
	deque<int> b;
	list<int> c;
	
	a.push_back(10);
	a.push_back(20);
	a.push_back(30);
	a.push_back(40);
	a.push_back(50);
	
	//使用迭代器 
	vector<int>::iterator iter1 = a.begin();
	vector<int>::iterator iter2 = a.end();//指向最后一个的下一个 
	cout<<*iter1<<endl;
	iter1++;
	cout<<*iter1<<endl;
	iter1++;
	cout<<*iter1<<endl;
	iter1--;
	cout<<*iter1<<endl;
	
	cout<<endl;
	vector<int>::iterator first = a.begin();
	vector<int>::iterator last = a.end();
	while(first!=last)
	{
		cout<<*first<<endl;
		first++;
	}
	
	vector<int>::iterator x=a.begin();
	vector<int>::iterator m=x+a.size()/2;//中间
	cout<<"中间: "<<*m<<endl; 
	
	
	return 0;
} 
/*
程序运行结果
10
20
30
20

10
20
30
40
50
中间: 30
*/ 
