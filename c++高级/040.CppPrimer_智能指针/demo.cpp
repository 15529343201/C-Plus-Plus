/*����ָ�롢auto_ptr��
����ָ��-���ײ����ڴ�й©
����ָ��
	�Լ������������ָ��-���ѣ�
	��ȸ��ơ�дʱ���ơ����ü���
	�������ӡ��ƻ��Ը���
	ʹ��std::auto_ptr����ָ��
	ʹ��Boost����ָ��
	ʹ��ATL����е�����ָ��
	��CComPtr��CComQIPtr�ȵ�
*/
#include<iostream>
#include<memory>
#include "smart_pointer.h"
using namespace std;

class Dog
{
	
}; 

void demo1()
{
	double d;
	d=25.5;
	
	double *pd=new double;
	*pd=25.5;
	
	Dog *pDog=new Dog();
	
	cout<<d<<endl;
	cout<<*pd<<endl;
	
//	if(xxx)
//		throw exception();//�����쳣��ֱ�ӷ��أ�����ִ��delete�������ڴ�й© 
	
	delete pDog;
	delete pd;
	
	return;
}

void demo2()
{
	auto_ptr<double> pd(new double);
	*pd=28.5;
	
	auto_ptr<Dog> pDog(new Dog());
	smart_pointer<Dog> spDog(new Dog());
	
	cout<<*pd<<endl;
}

int main()
{
	demo1();
	demo2();
	return 0;
}
/*
25.5
25.5
28.5
*/
