//顺序容器的操作(5)
/*
访问元素
c.back()
c.front()
c[n]
c.at(n) 
注意:c[n]和c.at(n)只适合vector和deque容器 
*/ 
#include<iostream>
#include<vector>
#include<list>
#include<deque>
using namespace std;

int main()
{
	vector<int> ivec;
	ivec.push_back(10);
	ivec.push_back(20);
	ivec.push_back(30);
	
	cout<<ivec.front()<<" ";
	cout<<ivec.back()<<" ";
	cout<<endl;
	
	vector<int>::reference a=ivec.front();
	vector<int>::reference b=ivec.back();
	cout<<a<<" ";
	cout<<b<<" ";
	cout<<endl;
	
	cout<<*ivec.begin()<<" ";
	cout<<*--ivec.end()<<" ";
	vector<int>::reference c=*ivec.begin();
	vector<int>::reference d=*--ivec.end();
	cout<<c<<" ";
	cout<<d<<" ";
	cout<<endl;
	
	cout<<ivec[0]<<" ";
	cout<<ivec[1]<<" ";
	cout<<ivec[2]<<" ";
	cout<<endl;
	
	cout<<ivec.at(0)<<" ";
	cout<<ivec.at(1)<<" ";
	cout<<ivec.at(2)<<" ";
	cout<<endl;
	
//	try{
//		cout<<ivec.at(300)<<endl;
//	}catch()
//	{
//		cout<<"出错了:下标越界."<<endl;
//	}
	
	list<int> ilist;
	ilist.push_back(100);
	if(!ilist.empty())
    {
    	cout<<ilist.front()<<" ";
    	cout<<ilist.back()<<" ";
	}
	cout<<endl;
	
	return 0;
}
/*
10 30
10 30
10 30 10 30
10 20 30
10 20 30
100 100
*/
