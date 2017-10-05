#include<iostream>
#include<string>
using namespace std;

#ifndef SALESITEM_H
#define SALESITEM_H

using std::istream;
using std::ostream;

class Sales_item
{
	friend bool operator==(const Sales_item&,const Sales_item&);
	public:
		Sales_item(const string book,unsigned units,double amount)
			:isbn(book),units_sold(units),revenue(amount){
			}
		Sales_item():units_sold(0),revenue(0.0){
		}
		friend ostream& operator<<(ostream&,const Sales_item&);
		double avg_price() const;
		bool same_isbn(const Sales_item &rhs) const
		{
			return isbn==rhs.isbn;
		}
	private:
		string isbn;
		unsigned units_sold;
		double revenue;
};

inline bool operator==(const Sales_item &lhs,const Sales_item &rhs)
{
	return lhs.units_sold==rhs.units_sold &&
	lhs.revenue==rhs.revenue &&
	lhs.same_isbn(rhs);
}

inline bool operator!=(const Sales_item &lhs,const Sales_item &rhs)
{
	return !(lhs==rhs);
}

inline ostream& operator<<(ostream& out,const Sales_item& s)
{
	out<<s.isbn<<"\t"<<s.units_sold<<"\t"<<s.revenue<<"\t"<<s.avg_price();
	return out;
}

inline double Sales_item::avg_price() const
{
	if(units_sold)
		return revenue/units_sold;
	else
		return 0;
	
}
#endif
