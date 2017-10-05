/*派生类的构造函数和析构函数
派生类的构造函数
	执行基类的构造函数
	执行成员对象的构造函数
	执行派生类的构造函数
派生类的析构函数
	对派生类新增普通成员进行清理
	调用成员对象析构函数
	调用基类析构函数
*/ 
#include<iostream>
using namespace std;

class Laozi
{
	public:
		int X;
};

class Xiaozi:public Laozi
{
	public:
		int Y;
}; 

class Base1
{
	private:
		int b1;
	public:
		Base1(int i)
		{
			b1=i;
			cout<<"Base1的构造函数被调用."<<endl;
		}
		void Print() const
		{
			cout<<b1<<endl;
		}
};

class Base2
{
	private:
		int b2;
	public:
		Base2(int i)
		{
			b2=i;
			cout<<"Base2的构造函数被调用."<<endl;
		}
		void Print()
		{
			cout<<b2<<endl;
		}
	
};

class Base3
{
	private:
		int b3;
	public:
		Base3()
		{
			b3=0;
			cout<<"Base3缺省的构造函数被调用."<<endl;
		}
		void Print()
		{
			cout<<b3<<endl;
		}
	
};

class Member
{
	private:
		int m;
	public:
		Member(int i)
		{
			m=i;
			cout<<"Member的构造函数被调用."<<endl;
		}
		int GetM()
		{
			return m;
		}
};

class Derived:public Base2,public Base1,public Base3
{
	private:
		int d;
		Member mem;
	public:
		Derived(int i,int j,int k,int l);
		void Print();
};

Derived::Derived(int i,int j,int k,int l):Base1(i),Base2(j),mem(k)
{
	d=l;
	cout<<"Derived的构造函数被调用"<<endl;
}

void Derived::Print()
{
	Base1::Print();
	Base2::Print();
	Base3::Print();
	cout<<mem.GetM()<<endl;
	cout<<d<<endl;
}

int main()
{
	Xiaozi a;//a是一个小子，创建小子对象，先创建/构造老子; 
	a.X=1;
	a.Y=2;
	
	Derived obj(1,2,3,4);
	obj.Print();
	return 0;
}
/*输出结果
Base2的构造函数被调用.
Base1的构造函数被调用.
Base3缺省的构造函数被调用.
Member的构造函数被调用.
Derived的构造函数被调用
1
2
0
3
4
*/ 
