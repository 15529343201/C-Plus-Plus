//STL stack
/*
(堆)栈:LIFO后进先出
自适应容器(容器适配器)
栈适配器 STL stack
stack<int,deque<int>>   s;
stack<int,vector<int>>  s;
stack<int,list<int>>    s;
s.empty()
s.size()
s.pop()
s.top()
s.push(item)
*/
#include<iostream>
#include<deque>
#include<stack>
#include<vector>
#include<list>
using namespace std;

int main()
{
	stack<int,deque<int> > a;
	stack<int,vector<int> > b;
	stack<int,list<int> > c;
	stack<int> d;//默认使用deque做堆栈
	
	d.push(25);
	d.push(10);
	d.push(1);
	d.push(5);
	
	cout<<"现在栈里一共有: "<<d.size()<<"个数据"<<endl;
	
	//while(d.size()!=0)
	while(d.empty()==false)
	{
		int x = d.top();//查看栈顶元素
	    d.pop(); 
	    cout<<x<<endl;
	}
	
	/*int x = d.top();//查看栈顶元素
	d.pop(); 
	cout<<x<<endl;
	 
	x=d.top();
	d.pop();
	cout<<x<<endl;*/
	
	cout<<"现在栈里一共有: "<<d.size()<<"个数据"<<endl;
	
	return 0;
}
/*
现在栈里一共有: 4个数据
5
1
10
25
现在栈里一共有: 0个数据
*/
