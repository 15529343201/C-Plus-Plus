//STL set与multiset
/*
set(集),multiset(多集)
红黑树(数据结构)
基本操作
  insert
  count和find
  erase
注意：不能通过find进行修改
*/
#include<iostream>
#include<set>
using namespace std;

template<typename Container>
void PrintContents(const Container &c);


int main()
{
	set<int> a;
	multiset<int> ma;
	
	a.insert(60);
	a.insert(-1);
	a.insert(3000);
	a.insert(60);
	
	cout<<a.count(3000)<<endl;
    
	cout<<"显示set里面的数据: "<<endl;
	PrintContents(a);
//    set<int>::const_iterator i=a.begin();
//    while(i!=a.end())
//    {
//    	cout<<*i<<endl;
//    	++i;
//	}
//	cout<<endl;
	
	ma.insert(3000);
	ma.insert(a.begin(),a.end());
	ma.insert(3000);
	
	cout<<"multiset里有"<<ma.count(3000)<<"个3000"<<endl;
	cout<<"显示multiset里面的数据: "<<endl;
	PrintContents(ma);
//    multiset<int>::const_iterator i2=ma.begin();
//    while(i2!=ma.end())
//    {
//    	cout<<*i2<<endl;
//    	++i2;
//	}
//	cout<<endl;
	

	
	
	return 0;
} 

template<typename Container>
void PrintContents(const Container &c)
{
	typename Container::const_iterator i=c.begin();
	while(i!=c.end())
	{
		cout<<*i<<endl;
		++i;
	}
	cout<<endl;
}
/*
1
显示set里面的数据:
-1
60
3000

multiset里有3个3000
显示multiset里面的数据:
-1
60
3000
3000
3000
*/
