/*����������
�������Լ�������
++,--
����ǰ׺��ʽ����׺��ʽ�������Լ�������
operator++();
operator++(int);
*/
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
 
class String
{
	private:
		char *ptrChars;
	public:
		String(char const *chars="");
		String(String const &str);
		~String();
		
		void display() const;
		
		String &operator++();//ǰ׺��
		String const operator++(int);//��׺�� 
};

String &String::operator++()
{
	for(size_t i=0;i<strlen(ptrChars);++i)
	{
		++ptrChars[i];
	}
	return *this;
}

String const String::operator++(int)
{
	String copy(*this);
	++(*this);
	return copy;
}

void String::display() const
{
	cout<<ptrChars<<endl;
}

String::String(char const *chars)
{
	chars=chars ? chars:"";
	ptrChars=new char[strlen(chars)+1];
	strcpy(ptrChars,chars);
}

String::String(String const &str)
{
	ptrChars=new char[strlen(str.ptrChars)+1];
	strcpy(ptrChars,str.ptrChars);
}

String::~String()
{
	delete[] ptrChars;
}
 
int main()
{
	int x=5;
	x++;
	++x;
	cout<<x<<endl;
	
	String s("ABC");
	s.display();
	
	++s;
	s.display();
	
	s++;
	s.display();
	
	cout<<endl<<endl;
	
	String str1("ABC");
	str1.display();
	
	String str2(++str1);
	str2.display();
	
	String str3(str1++);
	str3.display();
	str1.display();
	
}
/*������
7
ABC
BCD
CDE


ABC
BCD
BCD
CDE
*/ 
