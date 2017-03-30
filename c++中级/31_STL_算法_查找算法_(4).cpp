#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<list>
using namespace std;

int main()
{
	vector<int> ivec;
	list<int> searchList;
	for(int i=1;i<=11;++i)
	  ivec.push_back(i);
	for(vector<int>::iterator iter=ivec.begin();
	    iter!=ivec.end();++iter)
	    cout<<*iter<<" ";
	cout<<endl; 
	
	searchList.push_back(33);
	searchList.push_back(6);
	searchList.push_back(9);
	
	
	vector<int>::iterator pos;
	pos=find_first_of(ivec.begin(),ivec.end(),searchList.begin(),searchList.end());
	if(pos!=ivec.end())
	  cout<<"找到了,位置:"<<distance(ivec.begin(),pos)+1<<endl;
	else
	  cout<<"没找到!"<<endl;
	
	vector<int>::reverse_iterator rpos;
	rpos=find_first_of(ivec.rbegin(),ivec.rend(),searchList.begin(),searchList.end());
	cout<<"找到的位置: "<<distance(ivec.begin(),rpos.base())<<endl;
	
	string numerics("0123456789");
	string name("ra8d3wp6hk");
	string::size_type p=name.find_first_of(numerics);
	if(p!=string::npos)
	  cout<<"找到了，下标: "<<p<<endl;
	else
	  cout<<"没找到!"<<endl;
	  
	p=name.find_last_of(numerics);
	if(p!=string::npos)
	  cout<<"找到了，下标: "<<p<<endl;
	else
	  cout<<"没找到!"<<endl;
	
	return 0;
}
/*
1 2 3 4 5 6 7 8 9 10 11
找到了,位置:6
找到的位置: 9
找到了，下标: 2
找到了，下标: 7
*/
