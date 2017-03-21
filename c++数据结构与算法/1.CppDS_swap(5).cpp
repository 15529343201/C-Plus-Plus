#include<iostream>
using namespace std;

void swap(int &rx,int &ry);

int main()
{
	int a,b;
	a=1;
	b=10;
	
	cout<<"传引用:"<<endl;
	cout<<"交换前:"<<endl;
	cout<<"a="<<a<<",b="<<b<<endl;
	
	swap(a,b);
	
	cout<<"交换后:"<<endl;
	cout<<"a="<<a<<",b="<<b<<endl;
	return 0;
}

void swap(int &rx,int &ry)
{
	int temp;
	temp=rx;
	rx=ry;
	ry=temp;
}
