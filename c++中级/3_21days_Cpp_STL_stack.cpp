//STL stack
/*
(��)ջ:LIFO����ȳ�
����Ӧ����(����������)
ջ������ STL stack
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
	stack<int> d;//Ĭ��ʹ��deque����ջ
	
	d.push(25);
	d.push(10);
	d.push(1);
	d.push(5);
	
	cout<<"����ջ��һ����: "<<d.size()<<"������"<<endl;
	
	//while(d.size()!=0)
	while(d.empty()==false)
	{
		int x = d.top();//�鿴ջ��Ԫ��
	    d.pop(); 
	    cout<<x<<endl;
	}
	
	/*int x = d.top();//�鿴ջ��Ԫ��
	d.pop(); 
	cout<<x<<endl;
	 
	x=d.top();
	d.pop();
	cout<<x<<endl;*/
	
	cout<<"����ջ��һ����: "<<d.size()<<"������"<<endl;
	
	return 0;
}
/*
����ջ��һ����: 4������
5
1
10
25
����ջ��һ����: 0������
*/
