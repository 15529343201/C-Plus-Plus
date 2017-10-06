#include<iostream>
#include "Stack.h"
using namespace std;




int main()
{
	try
	{
		Stack<int> st;
		st.push(1);
		st.push(2);
		st.push(3);
		cout<<"pop:"<<st.pop()<<endl;
		cout<<"top:"<<st.top()<<endl;
		cout<<"pop:"<<st.pop()<<endl;
		cout<<"pop:"<<st.pop()<<endl;
		cout<<"top:"<<st.top()<<endl;
		cout<<"pop:"<<st.pop()<<endl;
	}
	catch(const exception& e)
	{
		cerr<<"发生异常："<<e.what()<<endl;
	}
	
	cout<<"Hello Stack"<<endl;
	return 0;
}
/*
pop:3
top:2
pop:2
pop:1
发生异常：read empty stack 堆栈是空的
Hello Stack
*/
