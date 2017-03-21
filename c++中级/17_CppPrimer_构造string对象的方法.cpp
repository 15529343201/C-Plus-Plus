//构造string对象的方法
/*
string s
String s(s2)
string s("value")
string s(n,'c')
string s(b,e)
string s(cp,n)
string s(s2,pos2)
string s(s2,pos2,len2)
*/
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1;
	cout<<s1<<endl;
	
	string s2(5,'a');
	cout<<s2<<endl;
	
	string s3(s2);
	cout<<s3<<endl;
	
	string s4(s3.begin(),s3.begin()+s3.size()/2);
	cout<<s4<<endl;
	
	char *cp="Hiya";
	char c_array[]="World!!!!";
	char no_null[]={'H','i'};
	
	string ss1(cp);
	cout<<ss1<<endl;
	
	string ss2(c_array,5);
	cout<<ss2<<endl;
	
	string ss3(c_array+5,4);
	cout<<ss3<<endl;
	
	//string ss4(no_null);
	string ss5(no_null,2);
	cout<<ss5<<endl;
	
	s1="Hiya";
	cout<<s1<<endl;
	
	string s6(s1,2);
	cout<<s6<<endl;
	
	string s7(s1,0,2);
	cout<<s7<<endl;
	
	string s8(s1,0,8);
	cout<<s8<<endl; 
	return 0;
 } 
