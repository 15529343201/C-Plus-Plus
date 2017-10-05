#include<iostream>
#include "string.h"
#include "string.cpp"
#include "pointer.h"
#include "pointer.cpp"
using namespace std;

int main()
{
	String s("Hello String");
	s.display();
	
	String *ps=&s;
	ps->display();
	
	try
	{
		Pointer p1("C++");
		p1->display();
		
		String s=*p1;
		s.display();
		
		Pointer p2;
		p2->display();
	}
	catch(String const &error)
	{
		error.display();
	}
	
	return 0;
}
/*Êä³ö½á¹û
Hello String
Hello String
C++
C++
Uninitialized pointer
*/ 
