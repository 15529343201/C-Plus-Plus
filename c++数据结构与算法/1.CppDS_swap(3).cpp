#include<iostream>
using namespace std;

void swap(int *px,int *py);

int main()
{
	int a,b;
	a=1;
	b=10;
	
	cout<<"��ָ��ķ���:"<<endl;
	cout<<"����ǰ:"<<endl;
	cout<<"a="<<a<<",b="<<b<<endl;
	
	swap(&a,&b);
	cout<<"������:"<<endl;
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
��ָ��ķ���:
����ǰ:
a=1,b=10
������:
a=10,b=1
*/
