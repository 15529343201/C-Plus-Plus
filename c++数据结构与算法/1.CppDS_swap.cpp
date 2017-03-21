//最基本的算法:交换(swap)
/*
void swap(int x,int y)-这个方法不行！
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
	
	cout<<"交换前:"<<endl;
	cout<<"a="<<a<<",b="<<b<<endl;
	
	tmp=a;
	a=b;
	b=tmp;
	
	cout<<"交换后:"<<endl;
	cout<<"a="<<a<<",b="<<b<<endl;
	
	return 0;
}
/*
交换前:
a=1,b=10
交换后:
a=10,b=1
*/ 
