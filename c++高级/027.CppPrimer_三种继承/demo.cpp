/*���ּ̳�
���С�˽�С��ܱ����̳�
class B:public A
class B:private A
class B:protected A
�ӿڼ̳к�ʵ�ּ̳�
�޸ļ̳з���(ȥ�������Ա)
Ĭ�ϼ̳з��ʼ���
*/ 
#include<iostream>
using namespace std;

class A
{
	public:
		int a;
		int a2;
		int a3;
		A()
		{
			a=10;
			b=20;
			c=30;
			a2=100;
			a3=200;
		}
	protected:
		int b;
	private:
		int c;
};

class B1:public A
{
	public:
		void test()
		{
			cout<<a<<endl;
			cout<<b<<endl;
			//cout<<c<<endl;
		}
		
};

class B2:private A
{
	public:
		using A::a2;
		void test()
		{
			cout<<a<<endl;
			cout<<b<<endl;
			//cout<<c<<endl;
		}
		
};

class B3:protected A
{
	public:
		void test()	
		{
			cout<<a<<endl;
			cout<<b<<endl;
			//cout<<c<<endl;
		}
};

class B4:A//Ĭ����private
{
	int x;//Ĭ����private 
	
};

struct B5:A//Ĭ����public
{
	int m;//Ĭ����public 
};

class C:public B1
{
	public:
		void test()
		{
			cout<<a<<endl;
			cout<<b<<endl;
			//cout<<c<<endl;
		}
};

int main()
{
	B1 b1;
	cout<<b1.a<<endl;
//	b1.b;
//	b1.c;
	b1.test();

	B2 b2;
//	cout<<b2.a<<endl;
//	cout<<b2.b<<endl;
//	cout<<b2.c<<endl;
	cout<<b2.a2<<endl;
//	cout<<b2.a3<<endl;
	b2.test();

	B3 b3;
//	cout<<b3.a<<endl;
//	cout<<b3.b<<endl;
//	cout<<b3.c<<endl;
	b3.test();
	return 0;
}
/*������
10
10
20
100
10
20
10
20
*/ 
