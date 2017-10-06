#ifndef _BS_H
#define _BS_H
#include<string>
//using namespace std;
//using std::string;

class Book
{
	
};

namespace Bookstore
{
	class Dog
	{
		
	};
	class Sales_item
	{
		private:
			std::string isbn;
			unsigned units_sold;
			double revenue;
		public:
			Sales_item(const std::string book=""):isbn(book),units_sold(0),revenue(0.0){}
			double avg_price() const;
	};
}

namespace MyApp
{
	class Cat
	{
		
	};
}


#endif
