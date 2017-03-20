//˳������ STL list��
/*
ʵ����std::list����
��list��ͷ����Ԫ��
��listĩβ����Ԫ��
��list�м����Ԫ��
ɾ��list�е�Ԫ��
��list��Ԫ�ؽ��з�ת������
*/
#include<iostream>
#include<list>
using namespace std;

void PrintListContents(const list<int>& listInput);

int main()
{
	list<int> a;
	list<int> b;
	std::list<int>::iterator iter;
	
	b.push_back(100);
	b.push_back(200);
	b.push_back(300);
	b.push_back(400);
	b.push_back(500);
	
	//����b
	PrintListContents(b);
	cout<<endl;
	
	a.push_front(4);
	a.push_front(3);
	a.push_front(2);
	a.push_front(1);
	a.push_back(5);
	
	iter=a.begin();
	++iter;
	
	//����Ԫ�� 
	a.insert(iter,10);
	++iter;
    a.insert(iter,4,20);
    ++iter;
    //��b������ȫ�����뵽a
	a.insert(a.begin(),b.begin(),b.end()); 
	a.insert(a.end(),b.begin(),b.end()); 
	a.insert(iter,++b.begin(),--b.end());

	PrintListContents(a);
	return 0;
}

//���� 
void PrintListContents(const list<int>& listInput)
{
	std::list<int>::const_iterator iter;
	for(iter=listInput.begin();iter != listInput.end(); ++iter)
	{
		cout<<*iter<<endl;
	}
}
/*
�������н��: 
100
200
300
400
500

100
200
300
400
500
1
10
2
20
20
20
20
3
200
300
400
4
5
100
200
300
400
500
*/
