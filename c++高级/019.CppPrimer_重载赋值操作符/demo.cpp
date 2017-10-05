#include<iostream>
#include<string.h>
using namespace std;

class String
{
	private:
		char *ptrChars;
	public:
		String(char const *chars="");
		String &operator=(String const &);
		String &operator=(char const *);//s="cat"
		String &operator=(char);//s='a'
			
		void print();
};

void String::print()
{
	cout<<ptrChars<<endl;
}

String &String::operator=(String const &str)
{
	if(strlen(ptrChars)!=strlen(str.ptrChars))
	{
		char *ptrHold=new char[strlen(str.ptrChars)+1];
		delete[] ptrChars;
		ptrChars=ptrHold;
	}
	strcpy(ptrChars,str.ptrChars);
	return *this;
}

String::String(char const *chars)
{
	chars=chars ? chars:"";
	ptrChars=new char[strlen(chars)+1];
	strcpy(ptrChars,chars);
}

int main()
{
	String s("hello");
	String s2("Dog");
	s.print();
	s2.print();
	s=s2;
	s.print();
	
	return 0;
}
/*Êä³ö½á¹û
hello
Dog
Dog
*/ 
