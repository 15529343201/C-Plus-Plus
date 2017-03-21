#include<iostream>
#define SWAP(x,y,t) ((t)=(x),(x)=(y),(y)=(t))
using namespace std;

int main()
{
	int a,b,temp;
	a=1;
	b=10;
	
	cout<<"使用宏定义函数: "<<endl;
	cout<<"交换前:"<<endl;
	cout<<"a="<<a<<",b="<<b<<endl;
	
	SWAP(a,b,temp);
	
	cout<<"交换后:"<<endl;
	cout<<"a="<<a<<",b="<<b<<endl;
	
	return 0;
}
/*
使用宏定义函数:
交换前:
a=1,b=10
交换后:
a=10,b=1
*/
