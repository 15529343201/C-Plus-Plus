//STL set��multiset
/*
set(��),multiset(�༯)
�����(���ݽṹ)
��������
  insert
  count��find
  erase
ע�⣺����ͨ��find�����޸�
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
    
	cout<<"��ʾset���������: "<<endl;
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
	
	cout<<"multiset����"<<ma.count(3000)<<"��3000"<<endl;
	cout<<"��ʾmultiset���������: "<<endl;
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
��ʾset���������:
-1
60
3000

multiset����3��3000
��ʾmultiset���������:
-1
60
3000
3000
3000
*/
