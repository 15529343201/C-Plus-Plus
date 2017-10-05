#include<iomanip>
using namespace std;

class Queue
{
	struct Node
	{
		int a;
		Node *next;
	};
	public:
		Queue();
		void push(int b);
		void pop();
		int getlength();
		virtual void print();
	private:
		Node *head;
		Node *rear;
};

void Queue::push(int b)
{
	Node *p1=new Node;
	p1->a=b;
	p1->next=NULL;
	rear->next=p1; 
	rear=p1;
	head->a++;
	cout<<setw(2)<<b<<setw(2)<<"进入队列"<<endl;
}

void Queue::pop()
{
	Node *p;
	p=head->next;
	cout<<" "<<setw(2)<<p->a<<setw(2)<<"出队"<<endl;
	head->next=p->next;
	delete p;
	head->a--;
}

int Queue::getlength()
{
	return head->a;
}

void Queue::print()
{
	Node *p;
	p=head->next;
	cout<<"队列中的元素是:"<<endl;
	while(p)
	{
		cout<<p->a<<"->";
		p=p->next;
	}
	cout<<"NULL"<<endl;
}

Queue::Queue()
{
	rear=head=new Node();
}
