#ifndef LIST_H
#define LIST_H
#include<iostream>

//循环链表 
template<class Type> class List;//前置声明 
template<class Type> class ListIterator;

//链表节点类 
template<class Type>
class ListNode
{
	friend class List<Type>;//声明友元类
	friend class ListIterator<Type>;//ListIterator操作ListNode私有数据成员 
	private:
	    Type data;//节点数据 
		ListNode *link;//节点指针 
		ListNode(Type);//只能由友元类调用 
		ListNode() {
			
		}
};

//链表类 
template<class Type>
class List
{
	friend class ListIterator<Type>;//链表迭代器操作List私有成员first 
	public:
		List(){
			first=new ListNode<Type>;
			first->link=first;//空的循环链表 
		};
		
		void Insert(Type); //插入
		 
		void Delete(Type);//删除数据 
		 
	private:
		ListNode<Type> *first;
};

//链表迭代器
template<class Type>
class ListIterator
{
	public:
		ListIterator(const List<Type>& l):list(l),current(l.first->link){;}
        bool NotNull();//判断链表迭代器指向链表当前节点是否为空 
	    bool NextNotNull();//当前节点下一个节点是否为空
		Type* First();
		Type* Next(); 
	
	private:
		const List<Type> &list;
		ListNode<Type>* current;
}; 

template<class Type>
bool ListIterator<Type>::NotNull()
{
	if(current!=list.first)
	  return true;//当前节点存在，放回true
	else
	  return false; 
}

template<class Type>
bool ListIterator<Type>::NextNotNull()
{
	if(current->link!=list.first)
	  return true;
	else
	  return false;
}

template<class Type>
Type* ListIterator<Type>::First()
{
	if(current!=list.first)
	  return &current->data;
	else
	  return 0; 
}

template<class Type>
Type* ListIterator<Type>::Next()
{
	current=current->link;
	if(current==list.first)
	  current=current->link;
	return &current->data;
//	if(current)
//	{
//		current=current->link;
//		return &current->data;
//	}
//	else
//	{
//		return 0;
//	}
}
//插入
template<class Type>
void List<Type>::Insert(Type k)
{
	ListNode<Type> *newnode=new ListNode<Type>(k); 
	newnode->link=first->link;
	first->link=newnode;
}

//构造方法，初始化类成员 
template<class Type>
ListNode<Type>::ListNode(Type element)
{
	data=element;
	link=0;
}



//删除链表数据 
template<class Type>
void List<Type>::Delete(Type k)
{
	ListNode<Type> *previous=first;//前一个
	ListNode<Type> *current;
	for(current=first->link;
	    (current!=first)&&(current->data!=k);
	    previous=current,current=current->link)
		{
			;//什么都不做，空循环，找到要被删除的节点 
		}
		if(current!=first)
		{
//			if(previous)//删除的不是第一个 
//				  previous->link=current->link;
//			else
//				  first=first->link;
            previous->link=current->link;
			delete current;
			
		} 
}



#endif 

