//�������͵�������Χ
/*
ÿһ�����������Լ��ĵ�����
���еĵ������ӿڶ���һ����
��������׼���У�����ʹ���β�Ϊһ�Ե������Ĺ��캯��
���õĵ���������
*iter,++iter,--iter,iter1==iter2,iter1!=iter2
vector��deque�����ĵ������Ķ������
iter+n,iter-n,>,>=,<,<=
��������Χ
begin/end,first/last
ʹ������ʧЧ����������
*/
#include<iostream>
#include<vector>
#include<deque>
#include<list>
using namespace std;

int main()
{
	vector<int> a;
	deque<int> b;
	list<int> c;
	
	a.push_back(10);
	a.push_back(20);
	a.push_back(30);
	a.push_back(40);
	a.push_back(50);
	
	//ʹ�õ����� 
	vector<int>::iterator iter1 = a.begin();
	vector<int>::iterator iter2 = a.end();//ָ�����һ������һ�� 
	cout<<*iter1<<endl;
	iter1++;
	cout<<*iter1<<endl;
	iter1++;
	cout<<*iter1<<endl;
	iter1--;
	cout<<*iter1<<endl;
	
	cout<<endl;
	vector<int>::iterator first = a.begin();
	vector<int>::iterator last = a.end();
	while(first!=last)
	{
		cout<<*first<<endl;
		first++;
	}
	
	vector<int>::iterator x=a.begin();
	vector<int>::iterator m=x+a.size()/2;//�м�
	cout<<"�м�: "<<*m<<endl; 
	
	
	return 0;
} 
/*
�������н��
10
20
30
20

10
20
30
40
50
�м�: 30
*/ 
