//ѡ������
/*
�ӵ�ǰδ�������������һ����С����������������
    ������������б����� 
Ҫ��:ѡ������ѡ����С�ģ��������
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

//ѡ������ 
void SelectSort(int *list,const int n)
{
	for(int i=0;i<n;i++)
	{
		int min=i;//min��������±� 
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
