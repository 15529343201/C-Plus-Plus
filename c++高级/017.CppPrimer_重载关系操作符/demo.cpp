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
		cout<<"���۵�a�����۵�b��һ����!"<<endl;
	}
	if(a!=c)
	{
		cout<<"���۵�a�����۵�c�ǲ�һ����!"<<endl; 
	}
	return 0;
}
/*������
���۵�a�����۵�b��һ����!
���۵�a�����۵�c�ǲ�һ����!
*/ 
