#include<iostream>
#include "Sales_item.h"
using namespace std;


int main()
{
	Sales_item a("2-123-12345-X",10,120.00);
	Sales_item b("2-123-12345-X",10,120.00);
	Sales_item c("1-123-12345-X",10,120.00);
	
	if(a==b)
	{
		cout<<"销售单a和销售单b是一样的!"<<endl;
	}
	if(a!=c)
	{
		cout<<"销售单a和销售单c是不一样的!"<<endl; 
	}
	return 0;
}
/*输出结果
销售单a和销售单b是一样的!
销售单a和销售单c是不一样的!
*/ 
