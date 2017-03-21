//最简单的算法:冒泡排序
/*
从左向右扫描数据,选择最大的数据，放在右边
要点:比较相邻的两个数，如果左边的数大于右边的数就进行交换
*/
#include<iostream>
using namespace std;

void BubbleSort(int list[],int n);

int main()
{
	int a[]={2,4,6,8,0,1,3,5,7,9};
	BubbleSort(a,10);
	
	for(int k=0;k<10;k++)
	{
		cout<<a[k]<<" ";
	}
	cout<<endl;
	return 0;
}

//冒泡排序 
void BubbleSort(int list[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(list[j]>list[j+1])
			  std::swap(list[j],list[j+1]);
		}
	}
 } 
/*
0 1 2 3 4 5 6 7 8 9
*/
