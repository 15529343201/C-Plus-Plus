#include<iostream>
using namespace std;

int main()
{
	int a,b;
	a=1;
	b=10;
	
	cout<<"ʹ��std::swap����: "<<endl;
	cout<<"����ǰ:"<<endl;
	cout<<"a="<<a<<",b="<<b<<endl;
	
	std::swap(a,b);
	
	cout<<"������:"<<endl;
	cout<<"a="<<a<<",b="<<b<<endl;
}
/*
ʹ��std::swap����:
����ǰ:
a=1,b=10
������:
a=10,b=1
*/
