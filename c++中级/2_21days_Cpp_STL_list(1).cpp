//顺序容器 STL list类
/*
实例化std::list对象
在list开头插入元素
在list末尾插入元素
在list中间插入元素
删除list中的元素
对list中元素进行反转和排序
*/
#include<iostream>
#include<list>
using namespace std;

void PrintListContents(const list<int>& listInput);

int main()
{
	list<int> a;
	list<int> b;
	std::list<int>::iterator iter;
	
	b.push_back(100);
	b.push_back(200);
	b.push_back(300);
	b.push_back(400);
	b.push_back(500);
	
	//遍历b
	PrintListContents(b);
	cout<<endl;
	
	a.push_front(4);
	a.push_front(3);
	a.push_front(2);
	a.push_front(1);
	a.push_back(5);
	
	iter=a.begin();
	++iter;
	
	//插入元素 
	a.insert(iter,10);
	++iter;
    a.insert(iter,4,20);
    ++iter;
    //把b的数据全部插入到a
	a.insert(a.begin(),b.begin(),b.end()); 
	a.insert(a.end(),b.begin(),b.end()); 
	a.insert(iter,++b.begin(),--b.end());

	PrintListContents(a);
	return 0;
}

//遍历 
void PrintListContents(const list<int>& listInput)
{
	std::list<int>::const_iterator iter;
	for(iter=listInput.begin();iter != listInput.end(); ++iter)
	{
		cout<<*iter<<endl;
	}
}
/*
程序运行结果: 
100
200
300
400
500

100
200
300
400
500
1
10
2
20
20
20
20
3
200
300
400
4
5
100
200
300
400
500
*/
