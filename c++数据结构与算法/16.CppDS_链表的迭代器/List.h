#ifndef LIST_H
#define LIST_H
#include<iostream>


template<class Type> class List;//ǰ������ 
template<class Type> class ListIterator;

//����ڵ��� 
template<class Type>
class ListNode
{
	friend class List<Type>;//������Ԫ��
	friend class ListIterator<Type>;//ListIterator����ListNode˽�����ݳ�Ա 
	private:
	    Type data;//�ڵ����� 
		ListNode *link;//�ڵ�ָ�� 
		ListNode(Type);//ֻ������Ԫ����� 
};

//������ 
template<class Type>
class List
{
	friend class ListIterator<Type>;//�������������List˽�г�Աfirst 
	public:
		List(){
			first=0;
		}
		
		void Insert(Type); //����
		void Show();//��ʾ�������� 
		void Delete(Type);//ɾ������ 
		void Invert();//����ת
		void Concatenate(List<Type>);//����ϲ� 
	private:
		ListNode<Type> *first;
};

//���������
template<class Type>
class ListIterator
{
	public:
		ListIterator(const List<Type>& l):list(l),current(l.first){;}
        bool NotNull();//�ж����������ָ������ǰ�ڵ��Ƿ�Ϊ�� 
	    bool NextNotNull();//��ǰ�ڵ���һ���ڵ��Ƿ�Ϊ��
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
	  return true;//��ǰ�ڵ���ڣ��Ż�true
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
//����
template<class Type>
void List<Type>::Insert(Type k)
{
	ListNode<Type> *newnode=new ListNode<Type>(k); 
	newnode->link=first;
	first=newnode;
}

//���췽������ʼ�����Ա 
template<class Type>
ListNode<Type>::ListNode(Type element)
{
	data=element;
	link=0;
}

//����ת 
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

//��������� 
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
		//�ҵ�һ����������һ��
		for(p=first;p->link;p=p->link)
		{
			//��ѭ�� 
		}
		p->link=b.first; 
	}
}

//��ʾ��������
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

//ɾ���������� 
template<class Type>
void List<Type>::Delete(Type k)
{
	ListNode<Type> *previous=0;//ǰһ��
	ListNode<Type> *current;
	for(current=first;
	    current&&current->data!=k;
	    previous=current,current=current->link)
		{
			;//ʲô����������ѭ�����ҵ�Ҫ��ɾ���Ľڵ� 
		}
		if(current)
		{
			if(previous)//ɾ���Ĳ��ǵ�һ�� 
				  previous->link=current->link;
			else
				  first=first->link;
			delete current;
			
		} 
}



#endif 
