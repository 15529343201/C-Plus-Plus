#include<iostream>
using namespace std;

int main()
{
	int a,b;
	a=1;
	b=10;
	
	cout<<"使用std::swap函数: "<<endl;
	cout<<"交换前:"<<endl;
	cout<<"a="<<a<<",b="<<b<<endl;
	
	std::swap(a,b);
	
	cout<<"交换后:"<<endl;
	cout<<"a="<<a<<",b="<<b<<endl;
}
/*
使用std::swap函数:
交换前:
a=1,b=10
交换后:
a=10,b=1
*/
