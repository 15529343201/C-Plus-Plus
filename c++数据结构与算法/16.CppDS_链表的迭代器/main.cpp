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
	
	cout<<"���Ǳ�׼C++ STL�е����������: "<<endl;
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

	
	cout<<"�����ҵ�����͵�����: "<<endl;
	
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
	
	cout<<"����Ļ�������:"<<endl;
	intList.Show();
	
	intList.Invert();
	intList.Show();
	
	intList.Delete(15);
	intList.Show();
	
	intList.Delete(20);//������û��20��ɾ���������� 
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
����:
���Ǳ�׼C++ STL�е����������:
35 -> 25 -> 15 -> 5 ->
�����ҵ�����͵�����:
350 -> 250 -> 150 -> 50
����Ļ�������:
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
 
