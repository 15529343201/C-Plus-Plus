//STL ���ȼ����� priority_queue
/*
����Ӧ����(����������):����ʹ��list
���ֵ���ȼ����У���Сֵ���ȼ�����
���ȼ����������� STL priority_queue
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
	//priority_queue<int,vector<int> > pq;//Ĭ��ʹ��vector
	priority_queue<int> pq;//���ֵ���ȼ����� 
	priority_queue<int,deque<int>,greater<int> > pq2;//��Сֵ���ȼ����� 
	
	pq.push(10);
	pq.push(5);
	pq.push(-1);
	pq.push(20);
	
	cout<<"���ȼ�������һ����: "<<pq.size()<<"������"<<endl;
	
	cout<<pq.top()<<endl;
	while(!pq.empty())
	{
		cout<<"�����ȼ�������ɾ��: "<<pq.top()<<endl;
		pq.pop();
	}
	
	cout<<endl<<endl<<"��������Сֵ���ȼ�����"<<endl; 
	pq2.push(10);
	pq2.push(5);
	pq2.push(-1);
	pq2.push(20);
	cout<<pq2.top()<<endl;
	
	while(!pq2.empty())
	{
		cout<<"�����ȼ�������ɾ��"<<pq2.top()<<endl;
		pq2.pop();
	}
	return 0;
}
/*
�������н��:
���ȼ�������һ����: 4������
20
�����ȼ�������ɾ��: 20
�����ȼ�������ɾ��: 10
�����ȼ�������ɾ��: 5
�����ȼ�������ɾ��: -1


��������Сֵ���ȼ�����
-1
�����ȼ�������ɾ��-1
�����ȼ�������ɾ��5
�����ȼ�������ɾ��10
�����ȼ�������ɾ��20
*/
