#include<iostream>
using namespace std;

void swap(int x,int y);
int main()
{
	int a,b;
	a=1;
	b=10;
	
	cout<<"һ�����ɹ���swap����:"<<endl;
	cout<<"����ǰ:"<<endl;
	cout<<"a="<<a<<",b="<<b<<endl;
	
	//a��b����δ���ȥ��?
	//��ֵ����:��a,b����һ��������ȥ 
	cout<<"������:"<<endl;
	swap(a,b);
	cout<<"a="<<a<<",b="<<b<<endl;
	return 0;
}
/*
һ�����ɹ���swap����:
����ǰ:
a=1,b=10
������:
a=1,b=10
*/

void swap(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}
