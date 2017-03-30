#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	vector<char> source(10,'.');
	for(int c='a';c<='f';c++)
	{
		source.push_back(c);
	}
	source.insert(source.end(),10,'.');
	
	for(vector<char>::iterator iter=source.begin();
	    iter!=source.end();++iter)
	    cout<<*iter<<" ";
	cout<<endl;
	
	vector<char> c1(source.begin(),source.end());
	copy(c1.begin()+10,c1.begin()+16,c1.begin()+7);
	for(vector<char>::iterator iter=c1.begin();
	    iter!=c1.end();++iter)
	    cout<<*iter<<" ";
	cout<<endl;
	
	vector<char> c2(source.begin(),source.end());
	copy_backward(c2.begin()+10,c2.begin()+16,c2.begin()+19);
	for(vector<char>::iterator iter=c2.begin();
	    iter!=c2.end();++iter)
	    cout<<*iter<<" ";
	cout<<endl;
	return 0;
	
}
/*
. . . . . . . . . . a b c d e f . . . . . . . . . .
. . . . . . . a b c d e f d e f . . . . . . . . . .
. . . . . . . . . . a b c a b c d e f . . . . . . .
*/
