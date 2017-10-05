/*类定义(3)
类声明 -> 前向声明
类定义
类对象
演变：c -> c++
*/
#include<iostream>
#include<string>
using namespace std;

class Screen;//类声明 

class LinkScreen
{
	Screen *window;
	LinkScreen *next;
	LinkScreen *prev;
};

class Y;
class X
{
	private:
		Y *ptr;	
};
class Y
{
	private:
		X *ptr;
		X obj;
};

//记录
class Record  //这是一个完整的类：类定义，类声明 
{
	typedef size_t size;
	private:
		size byte_count;
		string name;//记录名称
	public:
		Record():byte_count(0)
		{
			
		}
		Record(size s):byte_count(s)
		{
			
		}
		Record(string s):name(s),byte_count(0)
		{
			
		}
		size get_count() const
		{
			return byte_count;
		}
		string get_name() const
		{
			return name;
		} 
}; 

int main()
{
	Screen *scr;
	Record r;//在堆栈上创建类的对象
	Record *p = new Record;//在堆上动态地创建对象
	delete p; 
	
	cout<<"hello"<<endl;
	return 0;
} 
