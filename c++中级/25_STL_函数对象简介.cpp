#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
using namespace std;

void print(int elem)
{
	cout<<elem<<" ";
}

//函数对象
class PrintInt
{
	public:
		void operator() (int elem) const
		{
			cout<<elem<<" ";
		}
	
};

int main()
{
	//自动排序的红黑树 
	set<int,greater<int> > a;
	set<int,less<int> > b;
	
	a.insert(9);
	a.insert(3);
	a.insert(8);
	a.insert(1);
	a.insert(5);
	
	for(set<int,greater<int> >::iterator iter=a.begin();
	    iter!=a.end();++iter)
	    {
	    	cout<<*iter<<endl;
		}
	
	vector<int> ivec;
	for(int i=0;i<=9;++i)
	{
		ivec.push_back(i);
	}
	
	//算法
	for_each(ivec.begin(),ivec.end(),print); 
	cout<<endl;
	for_each(ivec.begin(),ivec.end(),PrintInt());
	cout<<endl;
	return 0;
 } 
/*
9
8
5
3
1
0 1 2 3 4 5 6 7 8 9
0 1 2 3 4 5 6 7 8 9

*/
