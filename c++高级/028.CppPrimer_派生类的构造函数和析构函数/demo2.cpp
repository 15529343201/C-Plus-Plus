#include<iostream>
using namespace std;

class Base
{
	private:
		int b1,b2;
	public:
		Base()
		{
			b1=b2=0;
		}
		Base(int i,int j);
		~Base();
		void Print()
		{
			cout<<b1<<","<<b2<<",";
		}
};

Base::Base(int i,int j)
{
	b1=i;
	b2=j;
	cout<<"Base�Ĺ��캯��������:"<<b1<<","<<b2<<endl;
}

Base::~Base()
{
	cout<<"Base����������������:"<<b1<<","<<b2<<endl;
}

class Derived:public Base
{
	private:
		int d;
	public:
		Derived()
		{
			d=0;
		}
		Derived(int i,int j,int k);
		~Derived();
		void Print();
};

Derived::Derived(int i,int j,int k):Base(i,j),d(k)
{
	cout<<"Derived�Ĺ��캯�������ã�"<<d<<endl;
}

Derived::~Derived()
{
	cout<<"Derived���������������ã�"<<d<<endl;
}

void Derived::Print()
{
	Base::Print();
	cout<<d<<endl;
}

int main()
{
	Derived objD1(1,2,3),objD2(-4,-5,-6);
	objD1.Print();
	objD2.Print();
	return 0;
}
/*������
Base�Ĺ��캯��������:1,2
Derived�Ĺ��캯�������ã�3
Base�Ĺ��캯��������:-4,-5
Derived�Ĺ��캯�������ã�-6
1,2,3
-4,-5,-6
Derived���������������ã�-6
Base����������������:-4,-5
Derived���������������ã�3
Base����������������:1,2
*/ 
