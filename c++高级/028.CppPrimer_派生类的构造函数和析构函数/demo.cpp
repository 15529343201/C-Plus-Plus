/*������Ĺ��캯������������
������Ĺ��캯��
	ִ�л���Ĺ��캯��
	ִ�г�Ա����Ĺ��캯��
	ִ��������Ĺ��캯��
���������������
	��������������ͨ��Ա��������
	���ó�Ա������������
	���û�����������
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
			cout<<"Base1�Ĺ��캯��������."<<endl;
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
			cout<<"Base2�Ĺ��캯��������."<<endl;
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
			cout<<"Base3ȱʡ�Ĺ��캯��������."<<endl;
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
			cout<<"Member�Ĺ��캯��������."<<endl;
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
	cout<<"Derived�Ĺ��캯��������"<<endl;
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
	Xiaozi a;//a��һ��С�ӣ�����С�Ӷ����ȴ���/��������; 
	a.X=1;
	a.Y=2;
	
	Derived obj(1,2,3,4);
	obj.Print();
	return 0;
}
/*������
Base2�Ĺ��캯��������.
Base1�Ĺ��캯��������.
Base3ȱʡ�Ĺ��캯��������.
Member�Ĺ��캯��������.
Derived�Ĺ��캯��������
1
2
0
3
4
*/ 
