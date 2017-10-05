/*类作用域
1.使用类的成员
2.作用域与成员定义
3.形参表和函数体处于类作用域中
4.函数返回类型不一定在类作用域中
类作用域中的名字查找
1.类成员声明的名字查找
2.类成员定义中的名字查找
3.类成员遵循常规的块作用域名字查找
4.函数作用域之后，在类作用域中查找
5.类作用域之后，在外围作用域中查找
*/
#include<iostream>
#include<string> 
using namespace std;

void doA()
{
	int a;
	a = 12;
}

void doB()
{
	int b;
	b = 99;
}

class First
{
	public:
		int memi;
		double memd;
		void doC()
		{
			memi = 22;
		}
		void doD()
		{
			doC();
		}
};

int height;//全局作用域的变量 

class ScreenB
{
	public:
		typedef string::size_type index;	
		void dummy_fcn(index height)
		{
			cursor = width*height;
			//cursor=width*this->height;
			//cursor = width*::height;
		}	
	private:
		index cursor;
		index height,width;
};

class ScreenA
{
	public:
		typedef string::size_type index;
		char get(index r,index c) const;
		index get_cursor() const;
	private:
		string contents;
		index cursor;
		index height,width;
		
};

ScreenA::index ScreenA::get_cursor() const
{
	return cursor;
}

char ScreenA::get(index r,index c) const
{
	index row = r * width;
	return contents[row+c];
}
int main()
{
	ScreenA::index ht;
	ScreenA sa;
	
	ScreenB b;
	
	//a = 8;
	//b = 88;
	doA();
	doB();
	//memi=12;
	First obj;
	First *ptr=&obj;
	obj.memi=12;
	obj.doC();
	ptr->memi=99;
	ptr->doC();
	return 0;
} 
