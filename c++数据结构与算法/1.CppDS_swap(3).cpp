#include<iostream>
using namespace std;

void swap(int *px,int *py);

int main()
{
	int a,b;
	a=1;
	b=10;
	
	cout<<"传指针的方法:"<<endl;
	cout<<"交换前:"<<endl;
	cout<<"a="<<a<<",b="<<b<<endl;
	
	swap(&a,&b);
	cout<<"交换后:"<<endl;
	cout<<"a="<<a<<",b="<<b<<endl;
	
	return 0;
}

void swap(int *px,int *py)
{
	int temp;
	temp=*px;
	*px=*py;
	*py=temp;
}
/*
传指针的方法:
交换前:
a=1,b=10
交换后:
a=10,b=1
*/
