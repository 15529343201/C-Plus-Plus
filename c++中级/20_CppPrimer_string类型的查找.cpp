//string类型的查找
/*
s.find(args)
s.rfind(args)
s.find_first_of(args)
s.find_last_of(args)
s.find_first_not_of(args)
s.find_last_not_of(args)
*/
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string name("AnnaBelle");
	string::size_type pos1=name.find("Bell");
	if(pos1==string::npos)
	  cout<<"没找到!"<<endl;
	else
	  cout<<"找到了!下标: "<<pos1<<endl;
	  
	string river("Mississippi");
	string::size_type first_pos=river.find("is");
	cout<<first_pos<<endl;
	string::size_type last_pos=river.rfind("is");
	cout<<last_pos<<endl;
	  
	name="r2%3C4d5e6";
	string numerics("0123456789");
	string::size_type pos=0;
	pos=name.find_last_of(numerics);
	cout<<"find_last_of: "<<pos<<endl;
	
	pos=0;
	while((pos=name.find_first_of(numerics,pos))
	       !=string::npos)
	       {
	       	   cout<<name[pos]<<" ";
	       	   pos++;
		   }
		   cout<<endl;
	
	pos=name.find_last_not_of(numerics);
	cout<<"find_last_not_of: "<<pos<<endl;
		   
	pos=0;
	while((pos=name.find_first_not_of(numerics,pos))
	       !=string::npos)
	{
		cout<<name[pos]<<" ";
		++pos;
	}
	cout<<endl;
//	string::size_type pos=name.find_first_of(numerics);
//	if(pos==string::npos)
//	  cout<<"没找到!"<<endl;
//	else
//	  cout<<"找到了!下标: "<<pos<<endl;
	
	string letters("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
	pos=0;
	while((pos=name.find_first_of(letters,pos))!=string::npos)
	{
		cout<<name[pos]<<" ";
		++pos;
	}
	cout<<endl;
	
	pos=0;
	while((pos=name.find_first_not_of(letters,pos))
	       !=string::npos)
	       {
	       	cout<<name[pos]<<" ";
	       	++pos;
		   }
	cout<<endl;
	
	return 0;
} 
/*
找到了!下标: 4
1
4
find_last_of: 9
2 3 4 5 6
find_last_not_of: 8
r % C d e
r C d e
2 % 3 4 5 6
*/
