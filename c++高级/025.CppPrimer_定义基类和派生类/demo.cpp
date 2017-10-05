#include<iostream>
#include<string>
using namespace std;

class Animal
{
	
};

class Dog:public Animal
{
	
};

class Cat:public Animal
{
	
};

class Item_base
{
	private:
		string isbn;
	protected:
		double price;
	public:
		//int x;
		Item_base(const string book="",double sales_price=0.0)
			:isbn(book),price(sales_price)
		{
			
		}
		string book() const
		{
			return isbn;
		}
		virtual double net_price(size_t n) const
		{
			return n*price;//虚函数派生类可以重新定义 
		}
};

class Bulk_item:public Item_base
{
	private:
		size_t min_qty;
		double discount;
	public:
		Bulk_item(const string book="",double sales_price=0.0,size_t qty=0,double disc_rate=0.0)
			:Item_base(book,sales_price),min_qty(qty),discount(disc_rate)
			{
				
			}
		void test()
		{
			//cout<<x<<endl;
			cout<<price<<endl;
			//cout<<isbn<<endl;
		}
		void test2(const Bulk_item &d,const Item_base &b)
		{
			//cout<<d.x<<endl;
			cout<<d.price<<endl;
			//cout<<b.x<<endl;
			//cout<<b.price<<endl;
		}
		double net_price(size_t cnt) const
		{
			if(cnt>=min_qty)
				return cnt*(1-discount)*price;
			else
				return cnt*price;
		 } 
};


int main()
{
	Animal a;
	Dog d;
	Cat c;
	
	Item_base item("0-12-3456-789",9.9);
	cout<<item.book()<<","<<item.net_price(10)<<endl;
//	cout<<item.x<<endl;
//	cout<<item.price<<endl;
//	cout<<item.isbn<<endl;

	Bulk_item item2("0-12-3456-789",9.9,10,0.12);
	cout<<item2.book()<<","<<item2.net_price(10)<<endl;
//	cout<<item2.x<<endl;
//	cout<<item2.price<<endl;
//	cout<<item2.isbn<<endl;
//	cout<<item2.min_qty<<endl;
//	cout<<item2.discount<<endl;

	item2.test();
	item2.test2(item2,item);
	return 0;
}
/*输出结果
0-12-3456-789,99
0-12-3456-789,87.12
9.9
9.9
*/ 
