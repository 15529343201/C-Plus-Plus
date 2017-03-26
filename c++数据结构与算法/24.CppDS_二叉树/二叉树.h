#ifndef _二叉树_H
#define _二叉树_H 
#include<iostream>
#include<queue>

using namespace std;

template<class T> class BinaryTree;

//树节点 
template<class T>
class TreeNode
{
	
	public:
		TreeNode()
		{
			leftChild=NULL;
			rightChild=NULL;
		};
		T data;
		TreeNode<T> *leftChild;
		TreeNode<T> *rightChild;
};

//树的定义 
template<class T>
class BinaryTree
{
	public:
		TreeNode<T> *root;
	public:
		//二叉树可以进行的操作
		void InOrder();
		void InOrder(TreeNode<T>* currentNode);
		void PreOrder();
		void PreOrder(TreeNode<T>* currentNode);
		void PostOrder();
		void PostOrder(TreeNode<T>* currentNode);
		void LevelOrder(); 
		void Visit(TreeNode<T>* currentNode);
};

template<class T>
void BinaryTree<T>::Visit(TreeNode<T>* currentNode)
{
	std::cout<<currentNode->data;
}

//中序遍历
template<class T>
void BinaryTree<T>::InOrder()
{
	InOrder(root);
} 

template<class T>
void BinaryTree<T>::InOrder(TreeNode<T> *currentNode)
{
	if(currentNode)
	{
		InOrder(currentNode->leftChild);
		Visit(currentNode);
		InOrder(currentNode->rightChild);
	}
}

//前序遍历
template<class T>
void BinaryTree<T>::PreOrder()
{
	PreOrder(root);
}

template<class T>
void BinaryTree<T>::PreOrder(TreeNode<T> *currentNode)
{
	if(currentNode)
	{
		Visit(currentNode);
		PreOrder(currentNode->leftChild);
		PreOrder(currentNode->rightChild);
	}
 } 
 
 
//后序遍历
template<class T>
void BinaryTree<T>::PostOrder()
{
	PostOrder(root);
}

template<class T>
void BinaryTree<T>::PostOrder(TreeNode<T> *currentNode)
{
	if(currentNode)
	{
		
		PostOrder(currentNode->leftChild);
		PostOrder(currentNode->rightChild);
		Visit(currentNode);
	}
}

//层序遍历
template<class T>
void BinaryTree<T>::LevelOrder()
{
	queue<TreeNode<T>*> q;
	TreeNode<T>* currentNode=root;
	while(currentNode)
	{
		Visit(currentNode);
		if(currentNode->leftChild)
		  q.push(currentNode->leftChild);
		if(currentNode->rightChild)
		  q.push(currentNode->rightChild);
		if(q.empty())
		  return;
		currentNode=q.front();
		q.pop();
	}
 } 

#endif
