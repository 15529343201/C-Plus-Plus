//string����ıȽ�
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
	  cout<<"�����"<<endl;
	if(s1==s2)
	  cout<<"���"<<endl;
	if(s1>s2)
	  cout<<"s1��"<<endl;
	if(s1<s2)
	  cout<<"s2��"<<endl;
	  
	cout<<endl<<endl;
	
	if(s1.compare(s2)>0)
	  cout<<"s1��"<<endl;
	if(s1.compare(s2)<0)
	  cout<<"s2��"<<endl;
	if(s1.compare(s2)==0)
	  cout<<"���"<<endl; 
	
	if(s1.compare(3,3,s2)>0)
	  cout<<"s1��"<<endl;
	if(s1.compare(3,3,s2,3,3)==0)
	  cout<<"���"<<endl;
	if(s1.compare(3,3,cp)>0)
	  cout<<"s1��"<<endl;
	if(s1.compare(3,3,cp,3,3)>0)
	  cout<<"s1��"<<endl;
	return 0;
}
/*
�����
s2��


s2��
s1��
���
s1��
s1��
*/
