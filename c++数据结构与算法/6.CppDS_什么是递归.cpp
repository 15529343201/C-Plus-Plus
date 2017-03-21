//递归
#include<iostream>
using namespace std;

void doA()
{
	cout<<"Hello"<<endl;
	doA();
}

void Gushi()
{
	cout<<"从前有座山，山里有座庙，庙里有一个老和尚，老和尚在给小和尚讲故事:"<<endl; 
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
	  cout<<"递归: "<<num<<"!="<<jiecheng(num)<<endl;
	  cout<<"迭代: "<<num<<"!="<<jiecheng(num)<<endl;
    } 
	return 0;
} 
/*
递归: 0!=1
迭代: 0!=1
递归: 1!=1
迭代: 1!=1
递归: 2!=2
迭代: 2!=2
递归: 3!=6
迭代: 3!=6
递归: 4!=24
迭代: 4!=24
递归: 5!=120
迭代: 5!=120
递归: 6!=720
迭代: 6!=720
递归: 7!=5040
迭代: 7!=5040
递归: 8!=40320
迭代: 8!=40320
递归: 9!=362880
迭代: 9!=362880
*/
