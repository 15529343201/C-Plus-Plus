#ifndef _SEQUENCE_H
#define _SEQUENCE_H
#include<iostream>
using namespace std;

template<class T>
class Queue
{
	private:
		T *queue;
		int front;
		int rear;
		int capacity;
	public:
		Queue(int queueCapacity=10);
		bool IsEmpty() const;
		T& Front() const;
		T& Rear() const;
		void Push(const T& item);
		void Pop();
};

template<class T>
Queue<T>::Queue(int queueCapacity):capacity(queueCapacity)
{
	if(capacity<1) throw "Queue capacity must be > 0";
	queue=new T[capacity];
	front=rear=0;
}

template<class T>
inline bool Queue<T>::IsEmpty() const
{
	return front==rear;
}

template<class T>
void Queue<T>::Push(const T &item)
{
//	if(rear==capacity-1)
//		rear=0;
//	else
//		rear++;
	if((rear+1)%capacity==front) //��������
	{
		//�ӱ� 
		T* newQueue=new T[2*capacity];
		
		int start=(front+1)%capacity;
		if(start<2)//û�л�ת,no wrap
			copy(queue+start,queue+start+capacity-1,newQueue);
		else 
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

template<class T>
inline T& Queue<T>::Front() const
{
	if(IsEmpty()) throw "Queue is empty.No front element";
	return queue[(front+1)%capacity];//front��ָ��ĵ�Ԫû�д��Ԫ�� 
}

template<class T>
inline T& Queue<T>::Rear() const
{
	if(IsEmpty()) throw "Queue is empty,No rear element";
	return queue[rear];
}

template<class T>
void Queue<T>::Pop()
{
	if(IsEmpty()) throw "Queue is empty.Cannot delete";
	front=(front+1)%capacity;
	queue[front].~T(); 
}

#endif 
