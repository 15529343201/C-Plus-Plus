#include<iostream>
#include<set>
using namespace std;

int main()
{
	multiset<int> a;
	
	a.insert(43);
	a.insert(78);
	a.insert(78);
	a.insert(-1);
	a.insert(124);
	
	multiset<int>::const_iterator i;
	
	cout<<"multiset����"<<a.size()<<"������."<<endl;
	cout<<"ÿһ��������: "<<endl;
	for(i=a.begin();i!=a.end();++i)
	{
		cout<<*i<<endl;
	}
	
	cout<<"Ҫɾ����������: "<<endl;
	int nNumberToErase=0;
	cin>>nNumberToErase;
	
	a.erase(nNumberToErase);
	
	cout<<"ɾ����:"<<endl;
	cout<<"multiset����"<<a.size()<<"������."<<endl;
	cout<<"ÿһ��������: "<<endl;
	for(i=a.begin();i!=a.end();++i)
	{
		cout<<*i<<endl;
	}
	
	a.clear();//��� 
	return 0;
}
/*
multiset����5������.
ÿһ��������:
-1
43
78
78
124
Ҫɾ����������:
78
ɾ����:
multiset����3������.
ÿһ��������:
-1
43
124
*/
