/*智能指针、auto_ptr类
常规指针-容易产生内存泄漏
智能指针
	自己动手设计智能指针-很难！
	深度复制、写时复制、引用计数
	引用链接、破坏性复制
	使用std::auto_ptr智能指针
	使用Boost智能指针
	使用ATL框架中的智能指针
	如CComPtr，CComQIPtr等等
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
//		throw exception();//发生异常，直接返回，不会执行delete，产生内存泄漏 
	
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
