#include<iostream>
#include "QueueLi.h" 
using namespace std;

int main()
{
	
	cout<<"测试链式队列"<<endl;
	Queue<int> myQ;
	
	myQ.enqueue(10);
	myQ.enqueue(20);
	myQ.enqueue(30);
	
	cout<<myQ.getFront()<<endl;
	myQ.dequeue();
	cout<<myQ.getFront()<<endl;
	cout<<myQ.dequeue()<<endl;
	cout<<myQ.dequeue()<<endl;
	
	for(int j=0;j<8;j++)
	{
		for(int i=0;i<8;i++)
			myQ.enqueue(i);
		while(!myQ.isEmpty())
			cout<<myQ.dequeue()<<" ";
		cout<<endl;
	}
	return 0;
}
/*输出结果
测试链式队列
10
20
20
30
0 1 2 3 4 5 6 7
0 1 2 3 4 5 6 7
0 1 2 3 4 5 6 7
0 1 2 3 4 5 6 7
0 1 2 3 4 5 6 7
0 1 2 3 4 5 6 7
0 1 2 3 4 5 6 7
0 1 2 3 4 5 6 7
*/ 
