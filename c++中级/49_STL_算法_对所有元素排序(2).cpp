#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

bool lessLength(const string& s1,const string& s2)
{
	return s1.length()<s2.length();
}

int main()
{
	vector<string> svec;
	vector<string> svec2;
	
	svec.push_back("1xxx");
	svec.push_back("2x");
	svec.push_back("3x");
	svec.push_back("4x");
	svec.push_back("5xx");
	svec.push_back("6xxxx");
	svec.push_back("7xx");
	svec.push_back("8xxx");
	svec.push_back("9xx");
	svec.push_back("10xxx");
	svec.push_back("11");
	svec.push_back("17");
	svec.push_back("12");
	svec.push_back("13");
	svec.push_back("14xx");
	svec.push_back("15");
	svec.push_back("16");

	svec2=svec;
	
	for(vector<string>::iterator iter=svec.begin();
	  iter!=svec.end();++iter)
	  cout<<*iter<<" ";
	cout<<endl;
	
	sort(svec.begin(),svec.end(),lessLength);
	for(vector<string>::iterator iter=svec.begin();
	  iter!=svec.end();++iter)
	  cout<<*iter<<" ";
	cout<<endl;
	
	stable_sort(svec2.begin(),svec2.end(),lessLength);
	for(vector<string>::iterator iter=svec2.begin();
	  iter!=svec2.end();++iter)
	  cout<<*iter<<" ";
	cout<<endl;
	return 0;
}
/*
1xxx 2x 3x 4x 5xx 6xxxx 7xx 8xxx 9xx 10xxx 11 17 12 13 14xx 15 16
2x 16 15 13 12 17 11 4x 3x 9xx 7xx 5xx 8xxx 14xx 1xxx 10xxx 6xxxx
2x 3x 4x 11 17 12 13 15 16 5xx 7xx 9xx 1xxx 8xxx 14xx 6xxxx 10xxx
*/
