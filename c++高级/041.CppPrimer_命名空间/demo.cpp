#include<iostream>
#include "bs.h"
//using namespace std;
using std::cout;
using std::endl;
//using namespace Bookstore;
using Bookstore::Sales_item;

namespace bs=Bookstore;

class Ant
{
	
};

namespace MyApp
{
	double pail;
	void processTrans()
	{
		 Bookstore::Sales_item s;
		 bs::Sales_item s2;
	} 
	class Dog
	{
		
	};
	namespace Lib
	{
		class Query
		{
			
		};
	}
}


int main()
{
	//using namespace MyApp;
	cout<<"hello"<<endl;
	MyApp::processTrans();
	MyApp::Dog dog;
	MyApp::Cat cat;
	
	//Bookstore::Sales_item item;
	Sales_item item;
	
	Bookstore::Dog d1;
	MyApp::Dog d2;
	
	MyApp::Lib::Query q;
	
	::Ant ant;
	::Book book;
	
	return 0;
}
