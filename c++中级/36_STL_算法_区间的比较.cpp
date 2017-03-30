//STL 算法-区间的比较
#include<iostream>
#include<algorithm>
#include<vector>
#include<list>
using namespace std;

bool bothEvenOrOdd(int elem1,int elem2)
{
	return elem1%2==elem2%2;
}

int main()
{
	vector<int> ivec;
	list<int> ilist;
	
	for(int i=1;i<=7;++i)
	  ivec.push_back(i);
	
	for(int i=3;i<=9;++i)
	  ilist.push_back(i);
	  
	for(vector<int>::iterator iter=ivec.begin();
	    iter!=ivec.end();++iter)
	    cout<<*iter<<" ";
	cout<<endl;
	
	for(list<int>::iterator iter=ilist.begin();
	    iter!=ilist.end();++iter)
	    cout<<*iter<<" ";
	cout<<endl;
	
	if(equal(ivec.begin(),ivec.end(),ilist.begin()))
	  cout<<"这两个区间相等"<<endl;
	else
	  cout<<"这两个区间不相等"<<endl; 
	  
	if(equal(ivec.begin(),ivec.end(),ilist.begin(),bothEvenOrOdd))
	{
		cout<<"这两个区间是奇数对应奇数，偶数对应偶数"<<endl;
	}
	else
	{
			cout<<"这两个区间不是奇数对应奇数，偶数对应偶数"<<endl;
	} 
	return 0;
} 
/*
1 2 3 4 5 6 7
3 4 5 6 7 8 9
这两个区间不相等
这两个区间是奇数对应奇数，偶数对应偶数
*/
