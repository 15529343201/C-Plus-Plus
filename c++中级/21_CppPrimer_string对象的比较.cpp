//string对象的比较
/*
s.compare(s2)
s.compare(pos1,n1,s2)
s.compare(pos1,n1,s2,pos2,n2)
s.compare(cp)
s.compare(pos1,n1,cp)
s.compare(pos1,n1,cp,n2)
*/
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1("abcxyz");
	string s2("abdxyz");
	char *cp="aabxxz";
	
	if(s1!=s2)
	  cout<<"不相等"<<endl;
	if(s1==s2)
	  cout<<"相等"<<endl;
	if(s1>s2)
	  cout<<"s1大"<<endl;
	if(s1<s2)
	  cout<<"s2大"<<endl;
	  
	cout<<endl<<endl;
	
	if(s1.compare(s2)>0)
	  cout<<"s1大"<<endl;
	if(s1.compare(s2)<0)
	  cout<<"s2大"<<endl;
	if(s1.compare(s2)==0)
	  cout<<"相等"<<endl; 
	
	if(s1.compare(3,3,s2)>0)
	  cout<<"s1大"<<endl;
	if(s1.compare(3,3,s2,3,3)==0)
	  cout<<"相等"<<endl;
	if(s1.compare(3,3,cp)>0)
	  cout<<"s1大"<<endl;
	if(s1.compare(3,3,cp,3,3)>0)
	  cout<<"s1大"<<endl;
	return 0;
}
/*
不相等
s2大


s2大
s1大
相等
s1大
s1大
*/
