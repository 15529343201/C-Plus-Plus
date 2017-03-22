//Permutations 排列组合 
#include<iostream>
using namespace std;

int c1=0;
int c2=0;

void show(char *p,int m)
{
	for(int i=0;i<=m;i++)
	 cout<<p[i];
	cout<<endl;
}

void Permutations(char *p,const int k,const int m)
{
	cout<<"c1="<<++c1<<endl;
	if(k==m)
	{
		for(int i=0;i<=m;i++)
		  cout<<p[i];
		cout<<endl;
	}
	else
	{
		for(int i=k;i<=m;i++)
	    {
	    	cout<<"递归前，交换前:";
	    	show(p,m);
		    swap(p[k],p[i]);
		    cout<<"递归前，交换后:";
		    show(p,m);
		    Permutations(p,k+1,m);
		    cout<<"c2="<<++c2<<endl;
		    cout<<"递归后,交换前:";
		    show(p,m);
		    swap(p[k],p[i]);
		    cout<<"递归后，交换后:";
		    show(p,m);
	    }
	}
	
//	//a开头的，后面跟着bc的所有排列
//	
//	Permutations(p,1,2)
//	swap(p[0],p[0]);
//	//b开头的，后面跟着ac的所有排列
//	
//	Permutations(p,1,2);
//	swap(p[0],p[1]);
//	//c开头的，后面跟着ab的所有排列
//    
//	Permutations(p,1,2);
//	swap(p[0],p[2]);

}

int main()
{
	char s[]="abc";
	Permutations(s,0,2);
	system("pause");
	return 0;
} 
/*
c1=1
递归前，交换前:abc
递归前，交换后:abc
c1=2
递归前，交换前:abc
递归前，交换后:abc
c1=3
abc
c2=1
递归后,交换前:abc
递归后，交换后:abc
递归前，交换前:abc
递归前，交换后:acb
c1=4
acb
c2=2
递归后,交换前:acb
递归后，交换后:abc
c2=3
递归后,交换前:abc
递归后，交换后:abc
递归前，交换前:abc
递归前，交换后:bac
c1=5
递归前，交换前:bac
递归前，交换后:bac
c1=6
bac
c2=4
递归后,交换前:bac
递归后，交换后:bac
递归前，交换前:bac
递归前，交换后:bca
c1=7
bca
c2=5
递归后,交换前:bca
递归后，交换后:bac
c2=6
递归后,交换前:bac
递归后，交换后:abc
递归前，交换前:abc
递归前，交换后:cba
c1=8
递归前，交换前:cba
递归前，交换后:cba
c1=9
cba
c2=7
递归后,交换前:cba
递归后，交换后:cba
递归前，交换前:cba
递归前，交换后:cab
c1=10
cab
c2=8
递归后,交换前:cab
递归后，交换后:cba
c2=9
递归后,交换前:cba
递归后，交换后:abc
*/
