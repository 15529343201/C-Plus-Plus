#include<iostream>
#include<set>
using namespace std;

int main()
{
	set<int> a;
	
	a.insert(43);
	a.insert(78);
	a.insert(-1);
	a.insert(124);
	 
	set<int>::const_iterator i;
	for(i=a.begin();i!=a.end();++i)
	  cout<<*i<<endl;
	  
	set<int>::iterator i_found=a.find(0);
	if(i_found!=a.end())
	  cout<<"�ҵ���: "<<*i_found<<endl;
	else
	  cout<<"û�ҵ���"<<endl;
	
	 
	return 0;
}
