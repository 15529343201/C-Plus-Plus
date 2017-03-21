//使用迭代器编写程序 
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
	vector<string> svec;
	string str;
	
	cout<<"Enter some strings(Ctrl+Z to end): "<<endl;
	while(cin>>str)
	{
		svec.push_back(str);
	}
	for(vector<string>::iterator iter=svec.begin();
	    iter!=svec.end();iter++)
	    {
	    	cout<<*iter<<endl;
		}
	
	return 0;
 } 
 
/*
Enter some strings(Ctrl+Z to end):
hello
string
vector
^Z
hello
string
vector
*/
