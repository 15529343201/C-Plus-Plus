//快速排序
/*
枢轴，枢纽
递归
*/ 
#include<iostream>
using namespace std;

template<class T>
void QuickSort(T *a,const int left,const int right)
{
	if(left<right)
	{
		//选枢轴进行划分
		int i=left;
		int j=right+1;//因为数组后面多加一个数 
		int pivot=a[left];//左边做枢轴 
		
		//划分算法 
        do{
        	do i++;while(a[i]<pivot);
        	do j--;while(a[j]>pivot);
        	if(i<j) 
        	  swap(a[i],a[j]);
		}while(i<j);
		swap(a[left],a[j]);//把枢轴换到中间
		
		//递归 
        QuickSort(a,left,j-1);
		QuickSort(a,j+1,right);
	}
}

int main()
{
	int k[]={8,6,4,2,0,1,3,5,7,9,99};
	QuickSort(k,0,9);
	for(int i=0;i<10;i++)
	{
		cout<<k[i]<<" ";
	}
	return 0;
} 
/*
0 1 2 3 4 5 6 7 8 9
*/
