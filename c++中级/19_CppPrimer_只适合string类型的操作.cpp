//ֻ�ʺ�string���͵Ĳ���
/*
����substr���غ���
����append���غ���
ʮ��replace���غ���
*/
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s("hello world");
	string s2=s.substr(6,5);
	cout<<s2<<endl;
	
	s2=s.substr(6);
	cout<<s2<<endl;
	
	s2=s.substr();//s2=s
	cout<<s2<<endl;
	
	s="C++ Primer";
	s.append(" 3rd Ed.");
	cout<<s<<endl;
	
	s="C++ Primer";
	s.insert(s.size()," 3rd Ed.");
	cout<<s<<endl;
	
	s.replace(11,3,"4th");
	cout<<s<<endl;
	
	s.replace(11,3,"Fourth");
	cout<<s<<endl;
	
	s="C++ Primer 3rd Ed.";
	s.erase(11,3);
	s.insert(11,"Fourth");
	cout<<s<<endl; 
	
	
	return 0;
}
/*
world
world
hello world
C++ Primer 3rd Ed.
C++ Primer 3rd Ed.
C++ Primer 4th Ed.
C++ Primer Fourth Ed.
C++ Primer Fourth Ed.
*/ 
