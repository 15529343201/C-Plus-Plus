/*转换操作符
转换函数
operator int() const;
注意：
1.必须是成员函数
2.不能指定返回类型
3.形参表必须是空的
4.必须显示地返回一个指定类型的值
5.不应该改变被转换对象，通常定义为const
*/ 
#include<iostream>
#include<string>
#include "Sales_item.h"
using namespace std;

class Dog
{
	public:
		Dog(string n,int a,double w):name(n),age(a),weight(w)
		{
				
		}
		operator int() const
		{
			return age;
		}
		operator double() const
		{
			return weight;
		}
	private:
		int age;
		double weight;
		string name;
};

int main()
{
	int a,b;
	
	a=10;
	b=a;
	
	Dog d("Bill",6,15.0);
	b=d;
	cout<<b<<endl;
	
	Sales_item item("x-123-7890",10,120.0);
	cout<<item<<endl;
	
	double m;
	m=item;
	cout<<m<<endl;
	return 0;
} 
/*输出结果
6
x-123-7890      10      120     12
120
*/
 
