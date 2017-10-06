#include<iostream>
#include<bitset>
#include<string>
#include<stdexcept>
using namespace std;

int main()
{
	try
	{
		string s("101ab10010");
		bitset<10> b(s);
		cout<<"biset ok"<<endl;
	}
	catch(invalid_argument err)
	{
		cout<<"bitset error:"<<err.what()<<endl;
	}
	return 0;
	
}
/*
bitset error:bitset::_M_copy_from_ptr
*/
