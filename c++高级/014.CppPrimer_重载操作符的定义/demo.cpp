#include<iostream>
using namespace std;

class Person
{
	//���ز��������ӷ�
	public:
		void operator+(const Person& rhs)
		{
			cout<<"ִ�������صļӷ�����"<<endl;
		} 
};

int main()
{
	int a,b;
	a=12;
	b=9;
	cout<<a+b<<endl;
	
	Person p1,p2;
	p1+p2;
	
	cout<<"hello"<<endl;
	return 0;
}
/*������
21
ִ�������صļӷ�����
hello
*/ 
