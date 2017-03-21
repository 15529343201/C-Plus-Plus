//顺序容器的操作(3)
/*
关系运算符
所有的容器类型都可以使用
比较的容器必须具有相同的容器类型
容器的比较是基于容器内元素的比较
容器内元素必须有相应的关系运算符
*/
#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<string>
using namespace std;

int main()
{
	vector<int> ivec1;
	vector<int> ivec2;
	vector<int> ivec3;
	vector<int> ivec4; 
	vector<int> ivec5;
	vector<double> dvec;
	list<int> ilst;
	deque<int> ideq;
	
	list<string> slst1;
	list<string> slst2;
	
	//不同类型不能比较 
	//if(dvec>ivec3)
	
	ivec1.push_back(1);
	ivec1.push_back(3);
	ivec1.push_back(5);
	ivec1.push_back(7);
	ivec1.push_back(9);
	ivec1.push_back(12);
	
	ivec2.push_back(0);
	ivec2.push_back(2);
	ivec2.push_back(4);
	ivec2.push_back(6);
	ivec2.push_back(8);
	ivec2.push_back(10);
	ivec2.push_back(12);
	
	ivec3.push_back(1);
	ivec3.push_back(3);
	ivec3.push_back(9);
	
	ivec4.push_back(1);
	ivec4.push_back(3);
	ivec4.push_back(5);
	ivec4.push_back(7);
	
	ivec5.push_back(1);
	ivec5.push_back(3);
	ivec5.push_back(5);
	ivec5.push_back(7);
	ivec5.push_back(9);
	ivec5.push_back(12);
	
	if(ivec1>ivec2)
	  cout<<"ivec1 大!"<<endl;
	if(ivec1!=ivec2)
	  cout<<"这两个向量不相等!"<<endl;
	  
	if(ivec1==ivec5)
	  cout<<"ivec1和ivec5相等!"<<endl;
	  
	if(ivec3>ivec1)
	  cout<<"ivec3大于ivec1!"<<endl;
	  
	if(ivec1>ivec4)
	  cout<<"ivec1大于ivec4!"<<endl;
	return 0;
}
/*
ivec1 大!
这两个向量不相等!
ivec1和ivec5相等!
ivec3大于ivec1!
ivec1大于ivec4!
*/
 

