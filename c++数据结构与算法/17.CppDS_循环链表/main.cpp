//����ĵ�����
/*
STL�е�����
  #include<list>
������������
template<class Type>
class ListIterator{
  public:
    Boolean NotNull();
	Boolean NextNotNull();
	Type* First();
	Type* Next();
};
*/
//����
#include<iostream>
#include<list>//C++ STL�е����� 
#include "List.h"//���������� 
using namespace std;

int main()
{
	cout<<"����:"<<endl;
	cout<<"�����ҵ�����͵�����: "<<endl;
	
	List<int> intList;
	intList.Insert(5);
	intList.Insert(15);
	intList.Insert(25);
	intList.Insert(35);
	
	ListIterator<int> li(intList);
	
	
	
	if(li.NextNotNull())
	{
		cout<<*li.First();
		while(li.NextNotNull())
		   cout<<" -> "<<*li.Next();
		cout<<endl;
	}
	
	cout<<"����һ��ѭ��:"<<endl;
	ListIterator<int> iter(intList);
	cout<<*iter.First()<<endl;
	cout<<*iter.Next()<<endl;
	cout<<*iter.Next()<<endl;
	cout<<*iter.Next()<<endl;
	cout<<*iter.Next()<<endl;	
	cout<<*iter.Next()<<endl;
	cout<<*iter.Next()<<endl;
	cout<<*iter.Next()<<endl;
	
	return 0;
} 



