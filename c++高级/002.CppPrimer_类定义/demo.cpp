/*类定义
类成员
构造函数
成员函数
访问标号实施抽象和封装
public
private
protected
*/
#include<iostream>
using namespace std;

//销售项目 --> 销售单 
class Sales_item
{
	private:
		string isbn;//书号
		unsigned units_sold;//销售数量
		double revenue;//总金额
	public:
		Sales_item(string book,unsigned units,double amount) 
			:isbn(book),units_sold(units),revenue(amount){
				
			}
		double avg_price() const
		{
			if(units_sold)
				return revenue / units_sold;
			else
				return 0;
		}
		bool same_isbn(const Sales_item &rhs) const
		{
			return isbn == rhs.isbn;
		}
		void add(const Sales_item &rhs)
		{
			units_sold += rhs.units_sold;
			revenue += rhs.revenue;
		}
};

class Person
{
	//成员 
	private:
		string name;
		string address;
	public:
		Person(const string nm,const string addr):name(nm),address(addr){
			//name=nm;
			//address=addr;
		}
		string getName() const {
			return name;
		}
		string getAddress() const {
			return address;
		}
};

int main()
{
	Person a("张飞","花园街5号");
	a.getAddress();
	a.getName();
	cout<<a.getName()<<" "<<a.getAddress()<<endl;
	
	Sales_item x("0-399-82477-1",2,20.00);
	Sales_item y("0-399-82477-1",6,48.00);
	
	if(x.same_isbn(y))
		x.add(y);
		
	cout<<"两个销售单的平均价："<<x.avg_price()<<endl;
	
	cout<<"Hello 类!"<<endl;
	return 0;
}
