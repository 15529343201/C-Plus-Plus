//链表的迭代器
/*
STL中的链表
  #include<list>
设计链表迭代器
template<class Type>
class ListIterator{
  public:
    Boolean NotNull();
	Boolean NextNotNull();
	Type* First();
	Type* Next();
};
*/
//链表
#include<iostream>
#include<list>//C++ STL中的链表 
#include "List.h"//我做的链表 
using namespace std;

int main()
{
	cout<<"测试:"<<endl;
	
	cout<<"这是标准C++ STL中的链表迭代器: "<<endl;
	list<int> listIntegers;
	listIntegers.push_front(5);
	listIntegers.push_front(15);
	listIntegers.push_front(25);
	listIntegers.push_front(35);
	
	list<int>::iterator iter=listIntegers.begin();
	//cout<<*iter<<" -> ";
	while(iter!=listIntegers.end())
	{
		cout<<*iter<<" -> ";
		++iter;
	}
	cout<<endl;

	
	cout<<"这是我的链表和迭代器: "<<endl;
	
	List<int> intList;
	intList.Insert(5);
	intList.Insert(15);
	intList.Insert(25);
	intList.Insert(35);
	
	ListIterator<int> li(intList);
	if(li.NextNotNull())
	{
		cout<<*li.First()*10;
		while(li.NextNotNull())
		   cout<<" -> "<<*li.Next()*10;
		cout<<endl;
	}
	//return 0;
	
	cout<<"链表的基本操作:"<<endl;
	intList.Show();
	
	intList.Invert();
	intList.Show();
	
	intList.Delete(15);
	intList.Show();
	
	intList.Delete(20);//链表中没有20，删除不起作用 
	intList.Show();
	
	List<char> charList;
	charList.Insert('a');
	charList.Insert('b');
	charList.Insert('c');
	charList.Insert('d');
	charList.Show();
	charList.Invert();
	charList.Show();
	
	List<char> char2List;
	char2List.Insert('e');
	char2List.Insert('f');
	char2List.Show();
	char2List.Invert();
	char2List.Show();
	
	charList.Concatenate(char2List);
	charList.Show(); 
	return 0;
} 

/*
测试:
这是标准C++ STL中的链表迭代器:
35 -> 25 -> 15 -> 5 ->
这是我的链表和迭代器:
350 -> 250 -> 150 -> 50
链表的基本操作:
35 -> 25 -> 15 -> 5
5 -> 15 -> 25 -> 35
5 -> 25 -> 35
5 -> 25 -> 35
d -> c -> b -> a
a -> b -> c -> d
f -> e
e -> f
a -> b -> c -> d -> e -> f
*/
 
