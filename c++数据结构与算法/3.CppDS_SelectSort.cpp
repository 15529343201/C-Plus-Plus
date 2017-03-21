//选择排序
/*
从当前未排序的整数中找一个最小的整数，将它放在
    已排序的整数列表的最后 
要点:选择排序选择最小的，往左边挑
*/
#include<iostream>
using namespace std;

void SelectSort(int *list,const int n);

int main()
{
	int x[]={1,3,5,7,9,0,2,4,6,8};
	SelectSort(x,10);
	
	for(int k=0;k<10;k++)
	  cout<<x[k]<<" ";
	  
	return 0;
}

//选择排序 
void SelectSort(int *list,const int n)
{
	for(int i=0;i<n;i++)
	{
		int min=i;//min是数组的下标 
		for(int j=i+1;j<n;j++)
		{
			if(list[j]<list[min])
			{
				min=j;
			}
		}
		std::swap(list[i],list[min]);
	}
}
