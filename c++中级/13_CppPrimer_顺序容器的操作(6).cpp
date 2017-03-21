//顺序容器的操作(6)
/*
删除元素
c.erase(p)
c.erase(b,e)
c.clear()
c.pop_back()
c.pop_front()
注意:c.pop_front()只适用于list和deque容器。
*/
#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<algorithm>
using namespace std;

int main()
{
	list<string> slist;
	slist.push_back("apple");
	slist.push_back("bill");
	slist.push_back("cat");
	slist.push_back("dog");
	slist.push_back("egg");
	slist.push_back("fish");
	slist.push_back("girl");
	
	//删除
	slist.pop_front();
	slist.pop_back();
	
	string s1("dog");
	string s2("fish");
	
	//查找
	list<string>::iterator iter1=find(slist.begin(),slist.end(),s1);
	list<string>::iterator iter2=find(slist.begin(),slist.end(),s2);
	if(iter1!=slist.end() && iter2!=slist.end())
	  slist.erase(iter1,iter2);//前包后不包 
	else
	  cout<<"没找到!"<<endl;
	
	//删除所有元素 
	slist.clear();
	slist.erase(slist.begin(),slist.end());
	
	if(!slist.empty())
	for(list<string>::iterator iter=slist.begin();
	    iter!=slist.end();++iter)
	    {
	    	cout<<*iter<<" ";
		}
	else
	   cout<<"容器是空的"<<endl; 
	cout<<endl;
	return 0;
}
/*
容器是空的
*/
 
