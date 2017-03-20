//顺序容器的定义
/*
顺序容器
vector
list
deque

顺序容器适配器
stack
queue
priority_queue
*/
#include<iostream>
#include<vector>
#include<list>
#include<deque>
using namespace std;

int main()
{
	vector<string> svec;//默认的构造函数 
	svec.push_back("hello");
	svec.push_back("C++");
	svec.push_back("STL");
	list<int> ilist;
	
	vector<int> ivec;//默认的构造函数
	ivec.push_back(1);
	ivec.push_back(2);
	ivec.push_back(3);
	vector<int> ivec2(ivec); 
	
	//list<int> ilist(ivec);错误 
	list<string> slist(svec.begin(),svec.end());
	vector<string>::iterator mid = svec.begin() + svec.size()/2;
	deque<string> front(svec.begin(),mid);
	deque<string> back(mid,svec.end());
	
	char *words[]={"stately","plump","buck","mulligan"};
	size_t words_size=sizeof(words)/sizeof(char*);
	list<string> words2(words,words+words_size);
	
	//64个字符串hello对list进行初始化 
	const list<int>::size_type list_size=64; 
	list<string> slist2(list_size,"Hello");
	
	list<int> ilist2(list_size);
	
	vector< vector<string> > lines;//容器里添加容器 
	list< vector<string> > lines2;
	 
	cout<<"成功!"<<endl;
	return 0;
} 
