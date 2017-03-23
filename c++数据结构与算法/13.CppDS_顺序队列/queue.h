#ifndef _queue_H
#define _queue_H
#include<algorithm>
using namespace std;

template<class T>
class Queue
{
	public:
		Queue(int queueCapacity=10);//构造函数，默认队列初始容量为10 
	    bool IsEmpty() const;//判断队列是否为空 
		T& Front() const;//读取队首数据 
		T& Rear() const;//读取队尾数据 
		void Push(const T& item);//对尾插入数据 
		void Pop();//从队首删除数据 
	private:
	    T *queue;//创建动态数组 
		int front;//下标,记录队首 
		int rear;//记录队尾 
		int capacity;//现在数组大小 
};

//构造函数
template<class T>
Queue<T>::Queue(int queueCapacity):capacity(queueCapacity)
{
	if(capacity<1)
	  throw "Queue capacity must be > 0";
	queue=new T[capacity];
	front=rear=0; 
}

//判队空
template<class T>
inline bool Queue<T>::IsEmpty() const
{
	return front==rear;
} 

//入队
template<class T>
void Queue<T>::Push(const T &item)
{
//	if(rear==capacity-1)
//	  rear=0;
//	else
//	  rear++;
    if((rear+1)%capacity==front)//队列满了
	{
		//加倍
		T* newQueue=new T[2*capacity];
		
		//判断是否发生回绕
		int start=(front+1)%capacity;
		if(start<2)//没有发生回绕，no wrap
		{
			copy(queue+start,queue+start+capacity-1,newQueue);
		} 
		else//wrap
		{
			copy(queue+start,queue+capacity,newQueue);
			copy(queue,queue+rear+1,newQueue+capacity-start);
		}
		front=2*capacity-1;
		rear=capacity-2;
		capacity*=2;
		delete[] queue;
		queue=newQueue;
		 
	} 
    rear=(rear+1)%capacity;
	queue[rear]=item;
}

//读队首数据 
template<class T>
inline T& Queue<T>::Front() const
{
	if(IsEmpty())
	  throw "Queue is empty.No front element";
	return queue[(front+1)%capacity];//队首加一，如果是末尾，就返回第一个 
}

//读队尾数据
template<class T>
inline T& Queue<T>::Rear() const
{
	if(IsEmpty())
	  throw "Queue is empty,No rear elemnet";
	return queue[rear];
}

//出队 
template<class T>
void Queue<T>::Pop()
{
	if(IsEmpty())
	  throw "Queue is empty,Cannot delete "; 
    front=(front+1)%capacity;
    queue[front].~T();//队列里可能是对象，调用析构函数删除 
	 

}
#endif
