//�ݹ�
#include<iostream>
using namespace std;

void doA()
{
	cout<<"Hello"<<endl;
	doA();
}

void Gushi()
{
	cout<<"��ǰ����ɽ��ɽ��������������һ���Ϻ��У��Ϻ����ڸ�С���н�����:"<<endl; 
    Gushi();
} 

long jiecheng(int n)
{
	if(n==0)
	  return 1;
	else
	  return n*jiecheng(n-1);
}

long jiecheng2(int n)
{
	long result=1;
	for(int i=n;i>0;i--)
	  result=result*i;
	return result;
}

int main()
{
	//doA();
	//Gushi();
	//cout<<jiecheng(5)<<endl;
	
	for(int num=0;num<10;num++)
	{ 
	  cout<<"�ݹ�: "<<num<<"!="<<jiecheng(num)<<endl;
	  cout<<"����: "<<num<<"!="<<jiecheng(num)<<endl;
    } 
	return 0;
} 
/*
�ݹ�: 0!=1
����: 0!=1
�ݹ�: 1!=1
����: 1!=1
�ݹ�: 2!=2
����: 2!=2
�ݹ�: 3!=6
����: 3!=6
�ݹ�: 4!=24
����: 4!=24
�ݹ�: 5!=120
����: 5!=120
�ݹ�: 6!=720
����: 6!=720
�ݹ�: 7!=5040
����: 7!=5040
�ݹ�: 8!=40320
����: 8!=40320
�ݹ�: 9!=362880
����: 9!=362880
*/
