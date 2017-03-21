//顺序查找
/*
顺序查找与折半查找(二分查找)
没有排序的数据:只能顺序查找
顺序查找:速度慢
  例如:100万个数据，平均要50万次
*/
#include<iostream>
using namespace std;

int SequentialSearch(int *a,const int n,int x);

int main()
{
	int m[]={2,4,6,8,0,1,3,5,7,9};
	int result;
	
	int num=7;
	
	result=SequentialSearch(m,10,num);
	
	if(result<0)
	  cout<<"没找到!"<<endl;
	else
	  cout<<"找到了:"<<num<<endl;
	return 0;
}

//顺序查找 
int SequentialSearch(int *a,const int n,int x)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]==x)
		  return i;
	}
	if(i==n)
	  return -1;
} 
/*
找到了:7
*/
