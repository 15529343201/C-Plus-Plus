//��������
/*
���ᣬ��Ŧ
�ݹ�
*/ 
#include<iostream>
using namespace std;

template<class T>
void QuickSort(T *a,const int left,const int right)
{
	if(left<right)
	{
		//ѡ������л���
		int i=left;
		int j=right+1;//��Ϊ���������һ���� 
		int pivot=a[left];//��������� 
		
		//�����㷨 
        do{
        	do i++;while(a[i]<pivot);
        	do j--;while(a[j]>pivot);
        	if(i<j) 
        	  swap(a[i],a[j]);
		}while(i<j);
		swap(a[left],a[j]);//�����ỻ���м�
		
		//�ݹ� 
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
