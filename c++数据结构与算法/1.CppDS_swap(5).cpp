#include<iostream>
using namespace std;

void swap(int &rx,int &ry);

int main()
{
	int a,b;
	a=1;
	b=10;
	
	cout<<"������:"<<endl;
	cout<<"����ǰ:"<<endl;
	cout<<"a="<<a<<",b="<<b<<endl;
	
	swap(a,b);
	
	cout<<"������:"<<endl;
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
