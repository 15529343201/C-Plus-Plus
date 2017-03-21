//顺序容器的操作(1)
/*
容器定义的类型别名
begin和end成员
顺序容器:
vector
list
deque
*/
#include<iostream>
#include<vector>
#include<list>
#include<deque>
using namespace std;

int main()
{
	vector<int> a;
	list<int> b;
	deque<int> c;
	
	//错误，不能修改 
//	ca.push_back(11);
//	ca.push_back(22);
//	ca.push_back(33);
	
	a.push_back(10);
	a.push_back(20);
	a.push_back(30);
	const vector<int> ca(a);//用a的数据初始化 
	
	b.push_back(100);
	b.push_back(200);
	b.push_back(300);
	
	c.push_back(1);
	c.push_back(2);
	c.push_back(3);
	
	for(vector<int>::size_type i=0;
	    i<a.size();++i)
	    cout<<a[i]<<endl;
	
	//list链表，没有下标 
//	for(list<int>::size_type k=0;
//	    k<b.size();++k)
//	    cout<<b[k]<<endl;
	    
	for(deque<int>::size_type n=0;
	    n<c.size();++n)
	    cout<<c[n]<<endl;
	    
	vector<int>::iterator firsta=a.begin();
	vector<int>::iterator lasta=a.end();
	cout<<"迭代器: "<<*firsta<<endl;
	cout<<endl;
	while(firsta!=lasta)
	{
		cout<<"迭代器: "<<*firsta<<endl;
		++firsta;
	}
	
	//逆序迭代器 
	vector<int>::reverse_iterator rfirsta=a.rbegin();
	vector<int>::reverse_iterator rlasta=a.rend();
	
	vector<int>::const_iterator cfirsta=ca.begin();
	vector<int>::const_iterator clasta=ca.end();
	
	vector<int>::size_type a1;
	vector<int>::iterator a2;
	vector<int>::const_iterator a3;
	vector<int>::reverse_iterator a4;
	vector<int>::const_reverse_iterator a5;
	vector<int>::difference_type a6;
//	vector<int>::value_type a7;
//	vector<int>::reference a8;
//	vector<int>::const_reference a9;
	
	list<int>::size_type b1;
	list<int>::iterator b2;
	list<int>::const_iterator b3;
	list<int>::reverse_iterator b4;
	list<int>::const_reverse_iterator b5;
	list<int>::difference_type b6;
//	list<int>::value_type b7;
//	list<int>::reference b8;
//	list<int>::const_reference b9;
	
	deque<int>::size_type c1;
	deque<int>::iterator c2;
	deque<int>::const_iterator c3;
	deque<int>::reverse_iterator c4;
	deque<int>::const_reverse_iterator c5;
	deque<int>::difference_type c6;
//	deque<int>::value_type c7;
//	deque<int>::reference c8;
//	deque<int>::const_reference c9;
	return 0;
}
/*
程序运行结果 
10
20
30
1
2
3
迭代器: 10

迭代器: 10
迭代器: 20
迭代器: 30

*/
 
