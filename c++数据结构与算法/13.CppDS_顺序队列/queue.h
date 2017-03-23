#ifndef _queue_H
#define _queue_H
#include<algorithm>
using namespace std;

template<class T>
class Queue
{
	public:
		Queue(int queueCapacity=10);//���캯����Ĭ�϶��г�ʼ����Ϊ10 
	    bool IsEmpty() const;//�ж϶����Ƿ�Ϊ�� 
		T& Front() const;//��ȡ�������� 
		T& Rear() const;//��ȡ��β���� 
		void Push(const T& item);//��β�������� 
		void Pop();//�Ӷ���ɾ������ 
	private:
	    T *queue;//������̬���� 
		int front;//�±�,��¼���� 
		int rear;//��¼��β 
		int capacity;//���������С 
};

//���캯��
template<class T>
Queue<T>::Queue(int queueCapacity):capacity(queueCapacity)
{
	if(capacity<1)
	  throw "Queue capacity must be > 0";
	queue=new T[capacity];
	front=rear=0; 
}

//�жӿ�
template<class T>
inline bool Queue<T>::IsEmpty() const
{
	return front==rear;
} 

//���
template<class T>
void Queue<T>::Push(const T &item)
{
//	if(rear==capacity-1)
//	  rear=0;
//	else
//	  rear++;
    if((rear+1)%capacity==front)//��������
	{
		//�ӱ�
		T* newQueue=new T[2*capacity];
		
		//�ж��Ƿ�������
		int start=(front+1)%capacity;
		if(start<2)//û�з������ƣ�no wrap
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

//���������� 
template<class T>
inline T& Queue<T>::Front() const
{
	if(IsEmpty())
	  throw "Queue is empty.No front element";
	return queue[(front+1)%capacity];//���׼�һ�������ĩβ���ͷ��ص�һ�� 
}

//����β����
template<class T>
inline T& Queue<T>::Rear() const
{
	if(IsEmpty())
	  throw "Queue is empty,No rear elemnet";
	return queue[rear];
}

//���� 
template<class T>
void Queue<T>::Pop()
{
	if(IsEmpty())
	  throw "Queue is empty,Cannot delete "; 
    front=(front+1)%capacity;
    queue[front].~T();//����������Ƕ��󣬵�����������ɾ�� 
	 

}
#endif
