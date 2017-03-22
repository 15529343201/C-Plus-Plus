//Permutations ������� 
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
	    	cout<<"�ݹ�ǰ������ǰ:";
	    	show(p,m);
		    swap(p[k],p[i]);
		    cout<<"�ݹ�ǰ��������:";
		    show(p,m);
		    Permutations(p,k+1,m);
		    cout<<"c2="<<++c2<<endl;
		    cout<<"�ݹ��,����ǰ:";
		    show(p,m);
		    swap(p[k],p[i]);
		    cout<<"�ݹ�󣬽�����:";
		    show(p,m);
	    }
	}
	
//	//a��ͷ�ģ��������bc����������
//	
//	Permutations(p,1,2)
//	swap(p[0],p[0]);
//	//b��ͷ�ģ��������ac����������
//	
//	Permutations(p,1,2);
//	swap(p[0],p[1]);
//	//c��ͷ�ģ��������ab����������
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
�ݹ�ǰ������ǰ:abc
�ݹ�ǰ��������:abc
c1=2
�ݹ�ǰ������ǰ:abc
�ݹ�ǰ��������:abc
c1=3
abc
c2=1
�ݹ��,����ǰ:abc
�ݹ�󣬽�����:abc
�ݹ�ǰ������ǰ:abc
�ݹ�ǰ��������:acb
c1=4
acb
c2=2
�ݹ��,����ǰ:acb
�ݹ�󣬽�����:abc
c2=3
�ݹ��,����ǰ:abc
�ݹ�󣬽�����:abc
�ݹ�ǰ������ǰ:abc
�ݹ�ǰ��������:bac
c1=5
�ݹ�ǰ������ǰ:bac
�ݹ�ǰ��������:bac
c1=6
bac
c2=4
�ݹ��,����ǰ:bac
�ݹ�󣬽�����:bac
�ݹ�ǰ������ǰ:bac
�ݹ�ǰ��������:bca
c1=7
bca
c2=5
�ݹ��,����ǰ:bca
�ݹ�󣬽�����:bac
c2=6
�ݹ��,����ǰ:bac
�ݹ�󣬽�����:abc
�ݹ�ǰ������ǰ:abc
�ݹ�ǰ��������:cba
c1=8
�ݹ�ǰ������ǰ:cba
�ݹ�ǰ��������:cba
c1=9
cba
c2=7
�ݹ��,����ǰ:cba
�ݹ�󣬽�����:cba
�ݹ�ǰ������ǰ:cba
�ݹ�ǰ��������:cab
c1=10
cab
c2=8
�ݹ��,����ǰ:cab
�ݹ�󣬽�����:cba
c2=9
�ݹ��,����ǰ:cba
�ݹ�󣬽�����:abc
*/
