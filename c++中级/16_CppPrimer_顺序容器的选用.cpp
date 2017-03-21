//容器的选用
/*
顺序容器 
   1.vector的优点和缺点
   2.list的优点和缺点
   3.deque的优点和缺点
插入操作如何影响容器的选择
元素的访问如何影响容器的选择
选择容器的提示
*/
#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<algorithm>
using namespace std;

int main()
{
	vector<int> v;
	list<int> l;
	deque<int> d;
	
	d.push_back(50);
	d.push_front(10);
	
	v.push_back(10);
	v.push_back(90);
	v.push_back(50);
	vector<int>::iterator vi=v.begin();
	++vi;
	++vi;
	v.insert(vi,70);
	vi=v.begin();
	++vi;
	v.erase(vi);
	//排序 
	sort(v.begin(),v.end());
	if(binary_search(v.begin(),v.end(),70))
	  cout<<"找到70!"<<endl;
	else
	  cout<<"没找到70!"<<endl;
	
	l.push_back(10);
	l.push_back(90);
	l.push_back(50);
	list<int>::iterator li=l.begin();
	++li;
	++li;
	l.insert(li,70);
	li=l.begin();
	++li;
	l.erase(li);
	
	l.sort();
	if(binary_search(l.begin(),l.end(),70))
	  cout<<"找到70!"<<endl;
	else
	  cout<<"没找到70!"<<endl;
	
	return 0;
}
/*
找到70!
找到70!
*/
