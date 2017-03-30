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
	
	cout<<"multiset里有"<<a.size()<<"个数据."<<endl;
	cout<<"每一个数据是: "<<endl;
	for(i=a.begin();i!=a.end();++i)
	{
		cout<<*i<<endl;
	}
	
	cout<<"要删除的数据是: "<<endl;
	int nNumberToErase=0;
	cin>>nNumberToErase;
	
	a.erase(nNumberToErase);
	
	cout<<"删除后:"<<endl;
	cout<<"multiset里有"<<a.size()<<"个数据."<<endl;
	cout<<"每一个数据是: "<<endl;
	for(i=a.begin();i!=a.end();++i)
	{
		cout<<*i<<endl;
	}
	
	a.clear();//清空 
	return 0;
}
/*
multiset里有5个数据.
每一个数据是:
-1
43
78
78
124
要删除的数据是:
78
删除后:
multiset里有3个数据.
每一个数据是:
-1
43
124
*/
