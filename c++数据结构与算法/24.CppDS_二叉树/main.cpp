#include<iostream>
#include "������.h"

using namespace std;

int main()
{
	BinaryTree<char> tree;
	TreeNode<char> jia,jian,cheng,chu,a,b,c,d,e;
	
	jia.data='+';
	jian.data='-';
	cheng.data='*';
	chu.data='/';
	a.data='A';
	b.data='B';
	c.data='C';
	d.data='D';
	e.data='E';
	
	tree.root=&jia;
	jia.leftChild=&jian;
	jia.rightChild=&e;
	jian.rightChild=&d;
	jian.leftChild=&cheng;
	cheng.leftChild=&chu;
	cheng.rightChild=&c;
	chu.leftChild=&a;
	chu.rightChild=&b;
	
	cout<<"�������:";
	tree.InOrder();//������� 
	cout<<endl;
	
	cout<<"ǰ�����:";
	tree.PreOrder();
	cout<<endl;
	
	cout<<"�������:";
	tree.PostOrder();
	cout<<endl;
	
	cout<<"�������:";
	tree.LevelOrder();
	cout<<endl;
	
	return 0; 
}
