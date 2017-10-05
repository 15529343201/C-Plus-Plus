/*操作符重载
输出操作符 << 重载
非成员函数 -> 友元函数
少做格式化
输入操作符 >> 重载
处理输入操作的错误
*/
#include<iostream>
#include<string>
using namespace std;

class Dog
{
	
};

class Sales_item
{
	private:
		string isbn;
		unsigned units_sold;
		double revenue;
	public:
		Sales_item(string book,unsigned units,double price):isbn(book),units_sold(units),revenue(price*units)
		{
			
		}
		Sales_item():units_sold(0),revenue(0.0)
		{
			
		}
		friend ostream& operator<<(ostream& out,const Sales_item& s);
		friend istream& operator>>(istream& in,Sales_item& s);
};

ostream& operator<<(ostream& out,const Sales_item& s)
{
	out<<s.isbn<<"\t"<<s.units_sold<<"\t"<<s.revenue;
	return out;
}

istream& operator>>(istream& in,Sales_item& s)
{
	double price;
	in>>s.isbn>>s.units_sold>>price;
	if(in)
		s.revenue=s.units_sold*price;
	else
		s=Sales_item();
	return in;
}
/*输出结果
0-201-78345-X   2       50
hello
0-201-54321-X
6
16.5
0-201-54321-X   6       99
*/ 

int main()
{
	Dog a;
	Sales_item item("0-201-78345-X",2,25.00);
	cout<<item<<endl;
	cout<<"hello"<<endl;
	
	cin>>item;
	cout<<item<<endl;
	
	return 0;
} 
