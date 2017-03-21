//使用list迭代器编写程序 
#include<iostream>
#include<vector>
#include<list>
#include<string>
using namespace std;

int main()
{
	list<string> slst;
	string str;
	
	cout<<"Enter some strings(Ctrl+Z to end): "<<endl;
	while(cin>>str)
	{
		slst.push_back(str);
	}
	for(list<string>::iterator iter=slst.begin();
	    iter!=slst.end();iter++)
	    {
	    	cout<<*iter<<endl;
		}
	
	return 0;
 } 
 
/*
Enter some strings(Ctrl+Z to end):
hello
string
list
^Z
hello
string
list
*/
