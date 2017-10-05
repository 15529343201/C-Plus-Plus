/*复制构造函数和赋值操作符
复制构造函数的适用情况
1.对象的定义形式-复制初始化
2.形参与返回值
3.初始化容器元素
4.构造函数与数组元素
赋值操作符
1.重载赋值操作符
2.复制与赋值常一起使用
合成的复制构造函数和赋值操作符
定义自己的复制构造函数和赋值操作符
*/
#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Sales_item
{
	private:
		string isbn;
		unsigned units_sold;
		double revenue;
	public:
		//构造函数 
		Sales_item():units_sold(0),revenue(0.0)
		{
			cout<<"默认的构造函数被调用了"<<endl;
		}
		Sales_item(const string book):isbn(book),units_sold(0),revenue(0.0)
		{
			cout<<"构造函数Sales_item(const string book)被调用了!"<<endl;
		}
		//C++默认写，不用自己写 
		//复制构造函数
		Sales_item(const Sales_item &orig):isbn(orig.isbn),
		units_sold(orig.units_sold),revenue(orig.revenue)
		{
			cout<<"复制构造函数被调用了!"<<endl;
		}
		//赋值操作符 
		Sales_item& operator=(const Sales_item &rhs)
		{
			cout<<"赋值操作符被调用了!"<<endl;
			isbn=rhs.isbn;
			units_sold=rhs.units_sold;
			revenue=rhs.revenue;
			return *this;
		}
};

Sales_item foo(Sales_item item)
{
	Sales_item temp;
	temp=item;
	return temp;
}

class NoName
{
	private:
		string *pstring;
		int i;
		double d;
	public:
		NoName():pstring(new string),i(0),d(0)
		{
			
		}
		NoName(const NoName& other):pstring(new string(*(other.pstring))),i(other.i),d(other.d)
		{
			cout<<"NoName Copy Constructor"<<endl;
		}
		NoName& operator=(const NoName &rhs)
		{
			cout<<"NoName 赋值操作符"<<endl;
			pstring=new string;
			*pstring=*(rhs.pstring);
			
			i=rhs.i;
			d=rhs.d;
			return *this;
		}
};

int main()
{
	NoName x,y;
	NoName z(x);
	x=y;
	cout<<endl;
	
	
	Sales_item a;
	Sales_item b("0-201-78345-X");
	
	Sales_item c(b);
	a=b;
	
	Sales_item item=string("9-999-99999-9");
	
	cout<<"试一下foo"<<endl;
	Sales_item ret;
	ret=foo(item);
	
	
	cout<<"试一下vector"<<endl;
	vector<Sales_item> svec(5);
	
	cout<<"试一下数组"<<endl;
	Sales_item primer_eds[] = {
		string("0-201-16487-6"),
		string("0-201-54848-8"),
		string("0-201-82470-1"),
		Sales_item()
	};
	return 0;
}
/*输出结果
NoName Copy Constructor
NoName 赋值操作符

默认的构造函数被调用了
构造函数Sales_item(const string book)被调用了!
复制构造函数被调用了!
赋值操作符被调用了!
构造函数Sales_item(const string book)被调用了!
试一下foo
默认的构造函数被调用了
复制构造函数被调用了!
默认的构造函数被调用了
赋值操作符被调用了!
赋值操作符被调用了!
试一下vector
默认的构造函数被调用了
复制构造函数被调用了!
复制构造函数被调用了!
复制构造函数被调用了!
复制构造函数被调用了!
复制构造函数被调用了!
试一下数组
构造函数Sales_item(const string book)被调用了!
构造函数Sales_item(const string book)被调用了!
构造函数Sales_item(const string book)被调用了!
默认的构造函数被调用了
*/ 
