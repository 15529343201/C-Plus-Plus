#ifndef LIST_H
#define LIST_H
#include<iostream>

//ѭ������ 
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
		ListNode() {
			
		}
};

//������ 
template<class Type>
class List
{
	friend class ListIterator<Type>;//�������������List˽�г�Աfirst 
	public:
		List(){
			first=new ListNode<Type>;
			first->link=first;//�յ�ѭ������ 
		};
		
		void Insert(Type); //����
		 
		void Delete(Type);//ɾ������ 
		 
	private:
		ListNode<Type> *first;
};

//���������
template<class Type>
class ListIterator
{
	public:
		ListIterator(const List<Type>& l):list(l),current(l.first->link){;}
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
	if(current!=list.first)
	  return true;//��ǰ�ڵ���ڣ��Ż�true
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
//����
template<class Type>
void List<Type>::Insert(Type k)
{
	ListNode<Type> *newnode=new ListNode<Type>(k); 
	newnode->link=first->link;
	first->link=newnode;
}

//���췽������ʼ�����Ա 
template<class Type>
ListNode<Type>::ListNode(Type element)
{
	data=element;
	link=0;
}



//ɾ���������� 
template<class Type>
void List<Type>::Delete(Type k)
{
	ListNode<Type> *previous=first;//ǰһ��
	ListNode<Type> *current;
	for(current=first->link;
	    (current!=first)&&(current->data!=k);
	    previous=current,current=current->link)
		{
			;//ʲô����������ѭ�����ҵ�Ҫ��ɾ���Ľڵ� 
		}
		if(current!=first)
		{
//			if(previous)//ɾ���Ĳ��ǵ�һ�� 
//				  previous->link=current->link;
//			else
//				  first=first->link;
            previous->link=current->link;
			delete current;
			
		} 
}



#endif 

