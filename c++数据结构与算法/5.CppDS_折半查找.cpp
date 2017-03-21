//二分查找
#include<iostream>
using namespace std;

int BinarySearch(int *a,const int x,const int n);

int main()
{
	int x[]={1,2,3,4,5,6,7,8,9,10};
	int result;
	
	int num;
	num=7;
	result=BinarySearch(x,num,10);
	
	if(result<0)
	  cout<<"没找到!"<<endl;
	else
	  cout<<"在["<<result<<"]找到"<<num<<endl; 
	
	return 0;
} 

int BinarySearch(int *a,const int x,const int n)
{
	int low,high,mid;
	low=0,high=n-1;
	
	while(low<=high)
	{
		mid=(low+high)/2;
		if(a[mid]==x)
		  return mid;
		else if(a[mid]<x)
		  low=mid+1;
		else if(a[mid]>x)
		  high=mid-1;
	}
	return -1;
}
/*
在[6]找到7
*/
