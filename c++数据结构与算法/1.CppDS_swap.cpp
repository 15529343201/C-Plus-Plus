//��������㷨:����(swap)
/*
void swap(int x,int y)-����������У�
void swap(int *px,int *py)
#define swap(x,y,t) ((t)=(x),(x)=(y),(y)=(t)
void swap(int &x,int &y)
template<class T> void swap(T& x,T& b)
*/
#include<iostream>
using namespace std;


int main()
{
	int a,b,tmp;
	a=1;
	b=10;
	
	cout<<"����ǰ:"<<endl;
	cout<<"a="<<a<<",b="<<b<<endl;
	
	tmp=a;
	a=b;
	b=tmp;
	
	cout<<"������:"<<endl;
	cout<<"a="<<a<<",b="<<b<<endl;
	
	return 0;
}
/*
����ǰ:
a=1,b=10
������:
a=10,b=1
*/ 
