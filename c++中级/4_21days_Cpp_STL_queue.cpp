//STL queue
/*
����:FIFO �Ƚ��ȳ�
����Ӧ����(����������)
ջ������ STL queue
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
	//queue<int,vector<int > c;//�����Խ��� 
	queue<int> q;
	
	q.push(10);
	q.push(5);
	q.push(-1);
	q.push(20);
	
	cout<<"���ڶ������� "<<q.size()<<" ������"<<endl;
	cout<<"���׵�����: "<<q.front()<<endl;
	cout<<"��β������: "<<q.back()<<endl;
	q.pop();
	cout<<"pop�Ժ��¶��׵�����: "<<q.front()<<endl;
	
	while(q.size()!=0)
	{
		cout<<"ɾ��:"<<q.front()<<endl;
		q.pop();
    }
    
    if(q.empty())
      cout<<"���ڶ����ǿյ�!"<<endl;
	
	return 0;
}
/*
�������н��:
���ڶ������� 4 ������
���׵�����: 10
��β������: 20
pop�Ժ��¶��׵�����: 5
ɾ��:5
ɾ��:-1
ɾ��:20
���ڶ����ǿյ�!
*/
