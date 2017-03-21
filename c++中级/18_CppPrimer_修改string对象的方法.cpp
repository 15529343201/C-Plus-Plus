//修改string对象的方法
/*
s.insert(p,t)
s.insert(p,n,t)
s.insert(p,b,e)
s.assign(b,e)
s.assign(n,t)
s.erase(p)
s.erase(b,e)
s.insert(pos,n,c)
s.insert(pos,s2)
s.insert(pos,s2,pos2,len)
s.insert(pos,cp,len)
s.insert(pos,cp)
s.assign(s2)
s.assign(s2,pos2,len)
s.assign(cp,len)
s.assign(cp)
s.erase(pos,len)
*/
#include<iostream>
#include<string>
using namespace std;
 
int main()
{
	string s("hello");
	string s2("abcdef");
	
	string::iterator p=s.begin();
	p++;
	
	//在e的前面插入A 
	s.insert(p,'A');
	cout<<s<<endl;
	
	string::iterator f=s.begin();
	f++;
	
	s.insert(f,3,'B');
	cout<<s<<endl;
	
	string::iterator b=s2.begin();
	string::iterator e=s2.end();
	
	s.insert(f,b,e);
	cout<<s<<endl;
	
	s="hello";
	cout<<s<<endl;
	
	s.assign(b,e);
	cout<<s<<endl;
	
	s.assign(8,'K');
	cout<<s<<endl;
	
	s="abcdef";
	p=s.begin();
	s.erase(p);
	cout<<s<<endl;
	
	p=s.begin();
	p++;
	p++;
	string::iterator p2=s.end();
	p2--;
	s.erase(p,p2);
	cout<<s<<endl;
	
	s="hello";
	s2="abc";
	
	s.insert(0,3,'A');
	cout<<s<<endl;
	
	s.insert(5,s2);
	cout<<s<<endl;
	
	s2="123456";
	s.insert(0,s2,2,3);
	cout<<s<<endl;
	

	return 0;
 } 
/*
hAello
hBBBAello
habcdefBBBAello
hello
abcdef
KKKKKKKK
bcdef
bcf
AAAhello
AAAheabcllo
345AAAheabcllo
*/
