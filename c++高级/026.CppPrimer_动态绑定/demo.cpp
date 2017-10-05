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
		
		double net_price(size_t cnt) const
		{
			if(cnt>=min_qty)
				return cnt*(1-discount)*price;
			else
				return cnt*price;
		 } 
};

void print_total(ostream &os,Item_base *item,size_t n)
{
	os<<"ISBN:"<<item->book()<<"\tnumbersold:"<<n<<"\ttotal price:"<<item->net_price(n)<<endl;
}

int main()
{
	Item_base* a=new Item_base("1-234-567-01",11.0);
	Bulk_item* b=new Bulk_item("1-234-567-02",22.0,2,0.05);
	print_total(cout,a,2);
	print_total(cout,b,3);
	
	Item_base* books[5];
	books[0]=new Item_base("0-123-456-01",10.0);
	books[1]=new Bulk_item("0-123-456-02",20.0,6,0.05);
	books[2]=new Item_base("0-123-456-03",30.0);
	books[3]=new Bulk_item("0-123-456-04",40.0,4,0.15);
	books[4]=new Bulk_item("0-123-456-05",50.0,2,0.18);
	
	int num[5];
	num[0]=2;
	num[1]=10;
	num[2]=1;
	num[3]=5;
	num[4]=3;
	
	for(int i=0;i<5;i++)
	{
		print_total(cout,books[i],num[i]);
	}

	
	
	return 0;
}
/*输出结果
ISBN:1-234-567-01       numbersold:2    total price:22
ISBN:1-234-567-02       numbersold:3    total price:62.7
ISBN:0-123-456-01       numbersold:2    total price:20
ISBN:0-123-456-02       numbersold:10   total price:190
ISBN:0-123-456-03       numbersold:1    total price:30
ISBN:0-123-456-04       numbersold:5    total price:170
ISBN:0-123-456-05       numbersold:3    total price:123
*/ 
