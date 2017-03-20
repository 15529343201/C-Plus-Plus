//顺序容器 STL deque类
/*
deque是一个动态数组
deque与vector非常类似
deque可以在数组开头和末尾插入和删除数据
*/
#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;

int main()
{
	deque<int> a;
	a.push_back(3);
	a.push_back(4);
	a.push_back(5);
	
	a.push_front(2);
	a.push_front(1);
	a.push_front(0);
	
	for(size_t nCount=0; nCount<a.size();++nCount)
	{
		cout<<a[nCount]<<endl;
	}
	
	a.pop_front();
	a.pop_back();
	
	cout<<"-------"<<endl;
	
	for(size_t nCount=0; nCount<a.size();++nCount)
	{
		cout<<"a["<<nCount<<"] = ";
		cout<<a[nCount]<<endl;
	}
	
    cout<<"-------"<<endl;
    
	//使用迭代器
	deque<int>::iterator iElementLocater;
	for(iElementLocater = a.begin();
	    iElementLocater != a.end();
	    ++iElementLocater)
	{
		size_t nOffset = distance(a.begin(),iElementLocater);
		cout<<"a["<<nOffset<<"] = "<<*iElementLocater<<endl;
	}
	
	return 0;
}
/*
程序运行输出： 
0
1
2
3
4
5
-------
a[0] = 1
a[1] = 2
a[2] = 3
a[3] = 4
-------
a[0] = 1
a[1] = 2
a[2] = 3
a[3] = 4
*/
