/*模板与泛型编程
两种模板
	类模板、函数模板
泛型编程
	主要用于容器、迭代器、算法  -> C++ STL 标准模板库
示例
	1.普通队列
	2.c++中的泛型队列
	3.顺序队列
	4.链式队列
*/
#include<iostream>
#include<string>
#include "q.h"
using namespace std;

int main()
{
	Queue q;
	
	q.push(10);
	q.push(20);
	q.push(30);
	q.print();
	return 0;
}
/*输出结果
10进入队列
20进入队列
30进入队列
队列中的元素是:
10->20->30->NULL
*/
 
