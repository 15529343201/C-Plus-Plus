#include<iostream>
#include "二叉树.h"

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
	
	cout<<"中序遍历:";
	tree.InOrder();//中序遍历 
	cout<<endl;
	
	cout<<"前序遍历:";
	tree.PreOrder();
	cout<<endl;
	
	cout<<"后序遍历:";
	tree.PostOrder();
	cout<<endl;
	
	cout<<"层序遍历:";
	tree.LevelOrder();
	cout<<endl;
	
	return 0; 
}
