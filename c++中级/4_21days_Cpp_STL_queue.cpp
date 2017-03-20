//STL queue
/*
队列:FIFO 先进先出
自适应容器(容器适配器)
栈适配器 STL queue
queue<int,deque<int> >  q;
queue<int,list<int> >   q;
q.empty()
q.size()
q.front()
q.back()
q.pop()
q.push(item)
*/
#include<iostream>
#include<queue>
#include<list>
#include<deque>
using namespace std;

int main()
{
	queue<int,deque<int> > a;
	queue<int,list<int> > b;
	//queue<int,vector<int > c;//不可以进行 
	queue<int> q;
	
	q.push(10);
	q.push(5);
	q.push(-1);
	q.push(20);
	
	cout<<"现在队列里有 "<<q.size()<<" 个数据"<<endl;
	cout<<"队首的数据: "<<q.front()<<endl;
	cout<<"队尾的数据: "<<q.back()<<endl;
	q.pop();
	cout<<"pop以后，新队首的数据: "<<q.front()<<endl;
	
	while(q.size()!=0)
	{
		cout<<"删除:"<<q.front()<<endl;
		q.pop();
    }
    
    if(q.empty())
      cout<<"现在队列是空的!"<<endl;
	
	return 0;
}
/*
程序运行结果:
现在队列里有 4 个数据
队首的数据: 10
队尾的数据: 20
pop以后，新队首的数据: 5
删除:5
删除:-1
删除:20
现在队列是空的!
*/
