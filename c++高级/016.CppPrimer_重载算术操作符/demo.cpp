#include<iostream>
#include<string>
using namespace std;

class Dog
{
	
};

class Cat
{
	
};

class Sales_item
{
	private:
		string isbn;
		unsigned units_sold;
		double revenue;
	public:
		Sales_item(const string book,const unsigned units,const double amount)
			:isbn(book),units_sold(units),revenue(amount)
		{
			
		}
		Sales_item& operator+=(const Sales_item&);
		Sales_item& operator-=(const Sales_item&);
		friend ostream& operator<<(ostream&,const Sales_item&);
};

Sales_item operator+(const Sales_item&,const Sales_item&);
Sales_item operator-(const Sales_item&,const Sales_item&);

Sales_item& Sales_item::operator+=(const Sales_item &rhs)
{
	units_sold+=rhs.units_sold;
	revenue+=rhs.revenue;
	return *this;
}

Sales_item operator+(const Sales_item& lhs,const Sales_item& rhs)
{
	Sales_item ret(lhs);
	ret+=rhs;
	return ret;
}

ostream& operator<<(ostream& out,const Sales_item& s)
{
	out<<s.isbn<<"\t"<<s.units_sold<<"\t"<<s.revenue;
	return out;
}

Sales_item& Sales_item::operator-=(const Sales_item &rhs)
{
	this->units_sold-=rhs.units_sold;
	this->revenue-=rhs.revenue;
	return *this;
}

Sales_item operator-(const Sales_item& lhs,const Sales_item& rhs)
{
	Sales_item ret(lhs);
	ret+=rhs;
	return ret;
}


int main()
{
	Dog dog;
	Cat cat;
	Sales_item item1("0-201-12345-X",10,120.0);
	Sales_item item2("0-201-12345-X",20,200.0);
	Sales_item result=item1+item2;
	cout<<result<<endl;
	
	Sales_item item3("0-201-12345-X",5,70.00);
	result+=item3;
	cout<<result<<endl;
	
	result-=item2;
	cout<<result<<endl;
	
	result=item2-item1;
	cout<<result<<endl;
	
	
	return 0;
}
/*Êä³ö½á¹û 
0-201-12345-X   30      320
0-201-12345-X   35      390
0-201-12345-X   15      190
0-201-12345-X   30      320
*/
