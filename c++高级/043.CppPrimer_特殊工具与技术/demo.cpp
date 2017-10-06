/*特殊工具与技术
allocator类
RTTI
类成员的指针
嵌套类
union
局部类
位域
volatile
extern "C"
*/
#include<iostream>
#include<typeinfo>
using namespace std;

class Item_base
{
	public:
		virtual double net_price(size_t n) const
		{
			return n*price;
			class Cat
			{
				
			};
			Cat cat;
		}
		std::string isbn;
		class Dog
		{
			
		};
	protected:
		double price;	
};

class Bulk_item:public Item_base
{
	public:
		double net_price(std::size_t cnt) const
		{
			if(cnt>min_qty)
				return cnt*(1-discount)*price;
			else
				return cnt*price;
		}
	private:
		std::size_t min_qty;
		double discount; 
};

union TokenValue
{
	char cval;
	int ival;
	double dval;
};

typedef unsigned int Bit;
class File
{
	public:
		Bit mode:2;
		Bit modified:1;
		Bit prot_owner:3;
		Bit prot_group:3;
		Bit prot_world:3;	
};

enum {
	READ=01,WRITE=02
};

extern "C" void show(char *);


int main()
{
	show("hello extern \"C\"\n");
	
	File myFile;
	myFile.mode=WRITE;
	myFile.modified=1;
	
	int x;
	volatile int y;//变量容易丢失，优化时不要改变 
	
	
	TokenValue myToken={'a'};
	cout<<myToken.ival<<endl;
	Item_base *pItem=new Item_base();
	
	allocator<Item_base> a;
	a.allocate(100);
	
	Item_base *bp=new Item_base();
	Bulk_item *dp=new Bulk_item();
	
	Item_base *bp2=dp;
	Bulk_item *dp2=dynamic_cast<Bulk_item*>(dp);
	
	if(typeid(Bulk_item)==typeid(*dp))
		cout<<"Bulk_item类型"<<endl;
	cout<<typeid(*bp).name()<<endl;
	cout<<typeid(*dp).name()<<endl;
	
	std::string Item_base::* p=&Item_base::isbn;
	double(Item_base::* pmf)(std::size_t) const=&Item_base::net_price;
	
	Item_base::Dog dog;
	
	
	return 0;
}
