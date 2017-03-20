//ɾ��list�е�Ԫ��
#include<iostream>
#include<list>
using namespace std;

void PrintListContents(const list<int>& listInput);

int main()
{
	std::list<int> a;
	a.push_front(4);
	a.push_front(3);
	
	list<int>::iterator iElementValueTwo;
	
	iElementValueTwo = a.insert(a.begin(),2);
	a.push_front(1);
	a.push_front(0);
	
	PrintListContents(a);
	cout<<endl;
	
	//ɾ��
	//a.erase(iElementValueTwo);//ֻɾ��2
	a.erase(a.begin(),iElementValueTwo);
	PrintListContents(a);
	
	a.erase(iElementValueTwo,a.end());
	PrintListContents(a);//a��Ϊ�� 
	
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
�������н��
0
1
2
3
4

2
3
4
*/ 
