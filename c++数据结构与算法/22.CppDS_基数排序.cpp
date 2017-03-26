#include<iostream>
#include<list>
using namespace std;

//判断最大的数是多少位 
int maxdigit(int data[],int n)
{
	int d=1;
	int p=10;
	for(int i=1;i<n;i++)
	{
		while(data[i]>=p)
		{
			p*=10;
			++d;
		}
	}
	return d;
}

//基数排序 
void radixsort(int data[],int n)
{
	int digits=maxdigit(data,n);
	list<int> lists[10];
	int d,j,k,factor;
	for(d=1,factor=1;d<=digits;factor*=10,d++)
	{
		for(j=0;j<n;j++)
		{
			lists[(data[j]/factor)%10].push_back(data[j]);
		}
		for(j=k=0;j<10;j++)//把十个链表的数复制到一个 
		{
			while(!lists[j].empty())
			{
				data[k++]=lists[j].front();
				lists[j].pop_front();
			}
		}
		//下面循环查看中间结果 
		for(int m=0;m<n;m++)
		  cout<<data[m]<<" ";
		cout<<endl;
		
	}
	
}

int main()
{
	int data[10]={179,208,306,93,859,984,55,9,271,33};
	cout<<"hello"<<endl;
	
	radixsort(data,10);
	
	cout<<"排序后: "<<endl;
	for(int i=0;i<10;i++)
	  cout<<data[i]<<" ";
	cout<<endl;
	system("pause");
	return 0;
 } 
