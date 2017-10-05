/*三种继承
公有、私有、受保护继承
class B:public A
class B:private A
class B:protected A
接口继承和实现继承
修改继承访问(去除个别成员)
默认继承访问级别
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

class B4:A//默认是private
{
	int x;//默认是private 
	
};

struct B5:A//默认是public
{
	int m;//默认是public 
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
/*输出结果
10
10
20
100
10
20
10
20
*/ 
