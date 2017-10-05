#include<iostream>
#include<string>
using namespace std;



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

void print_total_1(ostream &os,const Item_base item,size_t n)
{
	os<<"ISBN: "<<item.book()<<"\tnumber sold: "<<n<<"\ttotal price"<<item.net_price(n)<<endl;
}

void print_total_2(ostream &os,const Item_base *item,size_t n)
{
	os<<"ISBN: "<<item->book()<<"\tnumber sold: "<<n<<"\ttotal price"<<item->net_price(n)<<endl;
}

void print_total_3(ostream &os,const Item_base &item,size_t n)
{
	os<<"ISBN: "<<item.book()<<"\tnumber sold: "<<n<<"\ttotal price"<<item.net_price(n)<<endl;
}


int main()
{

	Item_base item("0-12-3456-789",9.9);
	Bulk_item item2("0-12-3456-789",9.9,10,0.12);
	
	print_total_1(cout,item,10);
	print_total_1(cout,item2,10);//这是对象转换，对象转换有问题! 
	
	cout<<endl;
	
	print_total_2(cout,&item,10);
	print_total_2(cout,&item2,10);//指针转换
	
	cout<<endl;
	
	print_total_3(cout,item,10);
	print_total_3(cout,item2,10);//引用转换 
	
	
	

	return 0;
}
/*输出结果
ISBN: 0-12-3456-789     number sold: 10 total price99
ISBN: 0-12-3456-789     number sold: 10 total price99

ISBN: 0-12-3456-789     number sold: 10 total price99
ISBN: 0-12-3456-789     number sold: 10 total price87.12

ISBN: 0-12-3456-789     number sold: 10 total price99
ISBN: 0-12-3456-789     number sold: 10 total price87.12
*/ 
