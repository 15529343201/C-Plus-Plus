#include<iostream>
using namespace std;
#ifndef THREELETTERLIST_H
#define THREELETTERLIST_H
class ThreeLetterList
{
	private:
		//Ç¶Ì×Àà 
		class ThreeLetterNode
        {
	       public:
	       	char data[3];
		    ThreeLetterNode *link;		
        };
		ThreeLetterNode *first;
	
	public:
		void test();
		void show();
};

void ThreeLetterList::test()
{
	ThreeLetterNode *f=new ThreeLetterNode();
	f->data[0]='B';
	f->data[1]='A';
	f->data[2]='T';
	f->link=0;
	
	first=f;
	
	f=new ThreeLetterNode();
	f->data[0]='C';
	f->data[1]='A';
	f->data[2]='T';
	f->link=0;
	
	first->link=f;
}

void ThreeLetterList::show()
{
	cout<<first->data[0]
	    <<first->data[1]
	    <<first->data[2]
		<<" -> ";
	
	cout<<first->link->data[0]
	    <<first->link->data[1]
	    <<first->link->data[2]
	    <<endl;
}

#endif
