//˳�����
/*
˳��������۰����(���ֲ���)
û�����������:ֻ��˳�����
˳�����:�ٶ���
  ����:100������ݣ�ƽ��Ҫ50���
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
	  cout<<"û�ҵ�!"<<endl;
	else
	  cout<<"�ҵ���:"<<num<<endl;
	return 0;
}

//˳����� 
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
�ҵ���:7
*/
