#include<iostream>
#include "queue.h"
using namespace std;

int main()
{
	cout<<"����˳����гɹ�"<<endl;
	
	//Queue<int> q;
	Queue<char> q(5);
    q.Push('A');
    q.Push('B');
    q.Push('C');
    cout<<q.Front()<<", "<<q.Rear()<<endl;
	q.Push('D');
	q.Push('E');
	cout<<q.Front()<<", "<<q.Rear()<<endl;
//	q.Pop();
//	cout<<q.Front()<<", "<<q.Rear()<<endl;
	q.Push('F');
	cout<<q.Front()<<", "<<q.Rear()<<endl;
	q.Push('G');
	cout<<q.Front()<<", "<<q.Rear()<<endl;
	
	return 0;
}
