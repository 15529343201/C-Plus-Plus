#ifndef LIST_H
#define LIST_H
#include<iostream>


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
};

//链表类 
template<class Type>
class List
{
	friend class ListIterator<Type>;//链表迭代器操作List私有成员first 
	public:
		List(){
			first=0;
		}
		
		void Insert(Type); //插入
		void Show();//显示链表数据 
		void Delete(Type);//删除数据 
		void Invert();//链表反转
		void Concatenate(List<Type>);//链表合并 
	private:
		ListNode<Type> *first;
};

//链表迭代器
template<class Type>
class ListIterator
{
	public:
		ListIterator(const List<Type>& l):list(l),current(l.first){;}
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
	if(current)
	  return true;//当前节点存在，放回true
	else
	  return false; 
}

template<class Type>
bool ListIterator<Type>::NextNotNull()
{
	if(current&&current->link)
	  return true;
	else
	  return false;
}

template<class Type>
Type* ListIterator<Type>::First()
{
	if(list.first)
	  return &list.first->data;
	else
	  return 0; 
}

template<class Type>
Type* ListIterator<Type>::Next()
{
	if(current)
	{
		current=current->link;
		return &current->data;
	}
	else
	{
		return 0;
	}
}
//插入
template<class Type>
void List<Type>::Insert(Type k)
{
	ListNode<Type> *newnode=new ListNode<Type>(k); 
	newnode->link=first;
	first=newnode;
}

//构造方法，初始化类成员 
template<class Type>
ListNode<Type>::ListNode(Type element)
{
	data=element;
	link=0;
}

//链表反转 
template<class Type>
void List<Type>::Invert()
{
	ListNode<Type> *p=first,*q=0;
	while(p)
	{
		ListNode<Type> *r=q;
		q=p;
		p=p->link;
		q->link=r;
	}
	first=q;
}

//链表的链接 
template<class Type>
void List<Type>::Concatenate(List<Type> b)
{
	if(!first)
	{
		first=b.first;
		return;
	}
	if(b.first)
	{
		ListNode<Type> *p;
		//找第一个链表的最后一个
		for(p=first;p->link;p=p->link)
		{
			//空循环 
		}
		p->link=b.first; 
	}
}

//显示链表数据
template<class Type>
void List<Type>::Show()
{
	for(ListNode<Type> *current=first;current;current=current->link)
	{
		std::cout<<current->data;
		if(current->link)
		  std::cout<<" -> ";
		 
	}
	std::cout<<std::endl;
}

//删除链表数据 
template<class Type>
void List<Type>::Delete(Type k)
{
	ListNode<Type> *previous=0;//前一个
	ListNode<Type> *current;
	for(current=first;
	    current&&current->data!=k;
	    previous=current,current=current->link)
		{
			;//什么都不做，空循环，找到要被删除的节点 
		}
		if(current)
		{
			if(previous)//删除的不是第一个 
				  previous->link=current->link;
			else
				  first=first->link;
			delete current;
			
		} 
}



#endif 
