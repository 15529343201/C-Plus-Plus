/*
两种算法比较
for_each() 速度快 不灵活
transform() 速度慢 非常灵活
*/
#include<iostream>
#include<algorithm>
#include<iterator>
#include<vector>
using namespace std;

void square(int& elem)
{
	elem=elem*elem;
}

int square2(int elem)
{
	return elem*elem;
}

int main()
{
	vector<int> a;
	vector<int> b;
	
	for(int i=1;i<=9;++i)
	{
		a.push_back(i);
		b.push_back(i);
	}
	
	cout<<"向量a: "<<endl; 
	for(vector<int>::iterator iter=a.begin();
	    iter!=a.end();++iter)
	    cout<<*iter<<" ";
	cout<<endl;
	
	for_each(a.begin(),a.end(),square);
	for(vector<int>::iterator iter=a.begin();
	    iter!=a.end();++iter)
	    cout<<*iter<<" ";
	cout<<endl;  
	
	cout<<"向量b: "<<endl;
	for(vector<int>::iterator iter=b.begin();
	   iter!=b.end();++iter)
	   cout<<*iter<<" ";
	cout<<endl;
	
	transform(b.begin(),b.end(),b.begin(),
	  square2);
	for(vector<int>::iterator iter=b.begin();
	   iter!=b.end();++iter)
	   cout<<*iter<<" ";
	cout<<endl;
	return 0;
} 
/*
向量a:
1 2 3 4 5 6 7 8 9
1 4 9 16 25 36 49 64 81
向量b:
1 2 3 4 5 6 7 8 9
1 4 9 16 25 36 49 64 81
*/
