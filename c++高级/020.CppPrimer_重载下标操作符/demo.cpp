#include<iostream>
#include<string.h>
using namespace std;

class String
{
	private:
		char *ptrChars;
		static String errorMessage;
	public:
		String(char const *chars="");
		char &operator[](size_t index) throw(String);
		char operator[](size_t index) const throw(String);
		void print();
	
};

void String::print()
{
	cout<<ptrChars<<endl;
}

String String::errorMessage("Subscript out of range");

//可变函数成员重载 
char &String::operator[](size_t index) throw(String)
{
	cout<<"调用了noconst"<<endl;
	if(index>=strlen(ptrChars))
		throw errorMessage;
	return ptrChars[index];
}

//常量函数成员的重载
char String::operator[](size_t index) const throw(String)
{
	cout<<"调用了const"<<endl;
	if(index>=strlen(ptrChars))
		throw errorMessage;
	return ptrChars[index];
}
 
String::String(char const *chars)
{
	chars=chars ? chars:"";
	ptrChars=new char[strlen(chars)+1];
	strcpy(ptrChars,chars);
}

int main()
{
	String s("Hello");
	s.print();
	cout<<s[0]<<endl;
	
	s[0]='A';
	s.print();
	
	String const s2("dog");
	cout<<s2[2]<<endl;
	
	return 0;
}
/*输出结果
Hello
调用了noconst
H
调用了noconst
Aello
调用了const
g
*/ 
