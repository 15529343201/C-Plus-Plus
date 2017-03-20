//STL 优先级队列 priority_queue
/*
自适应容器(容器适配器):不能使用list
最大值优先级队列，最小值优先级队列
优先级队列适配器 STL priority_queue
priority_queue<int,deque<int> > pq;
priority_queue<int,vector<int> > pq;
pq.empty()
pq.size()
pq.top()
pq.pop()
pq.push(item)
*/
#include<iostream>
#include<queue>
using namespace std;

int main()
{
	//priority_queue<int,vector<int> > pq;//默认使用vector
	priority_queue<int> pq;//最大值优先级队列 
	priority_queue<int,deque<int>,greater<int> > pq2;//最小值优先级队列 
	
	pq.push(10);
	pq.push(5);
	pq.push(-1);
	pq.push(20);
	
	cout<<"优先级队列里一共有: "<<pq.size()<<"个数据"<<endl;
	
	cout<<pq.top()<<endl;
	while(!pq.empty())
	{
		cout<<"从优先级队列里删除: "<<pq.top()<<endl;
		pq.pop();
	}
	
	cout<<endl<<endl<<"下面是最小值优先级队列"<<endl; 
	pq2.push(10);
	pq2.push(5);
	pq2.push(-1);
	pq2.push(20);
	cout<<pq2.top()<<endl;
	
	while(!pq2.empty())
	{
		cout<<"从优先级队列里删除"<<pq2.top()<<endl;
		pq2.pop();
	}
	return 0;
}
/*
程序运行结果:
优先级队列里一共有: 4个数据
20
从优先级队列里删除: 20
从优先级队列里删除: 10
从优先级队列里删除: 5
从优先级队列里删除: -1


下面是最小值优先级队列
-1
从优先级队列里删除-1
从优先级队列里删除5
从优先级队列里删除10
从优先级队列里删除20
*/
