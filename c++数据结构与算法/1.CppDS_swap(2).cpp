#include<iostream>
using namespace std;

void swap(int x,int y);
int main()
{
	int a,b;
	a=1;
	b=10;
	
	cout<<"一个不成功的swap方法:"<<endl;
	cout<<"交换前:"<<endl;
	cout<<"a="<<a<<",b="<<b<<endl;
	
	//a和b是如何传进去的?
	//按值传递:把a,b拷贝一个，传进去 
	cout<<"交换后:"<<endl;
	swap(a,b);
	cout<<"a="<<a<<",b="<<b<<endl;
	return 0;
}
/*
一个不成功的swap方法:
交换前:
a=1,b=10
交换后:
a=1,b=10
*/

void swap(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}
