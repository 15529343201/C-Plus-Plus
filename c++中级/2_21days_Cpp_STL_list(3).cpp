//反转和排序
#include<iostream>
#include<list>
using namespace std;

void PrintListContents(const list<int>& listInput);

int main()
{
	std::list<int> a;
	a.push_front(5);
	a.push_front(9);
	a.push_front(21);
	a.push_front(16);
	a.push_front(8);
	
	PrintListContents(a);
	cout<<endl;
	
	//排序
	a.sort();
	PrintListContents(a);
	cout<<endl;
	
	//反转 
	a.reverse();
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
程序运行结果
8
16
21 
9
5

5
8
9
16
21

21
16
9
8
5
*/ 
