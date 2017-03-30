/*
STL 算法-transform()
transform()算法有两种形式
transform(b1,e1,b2,op)
transform(b1,e1,b2,b3,op)
注意:
   1.如果目标与原目标相同，transform()就和for_each()一样
   2.如果想以某值替换符合规则的元素，应使用replace()算法
*/
#include<iostream>
#include<algorithm>
#include<iterator>
#include<vector>
#include<list>
using namespace std;

int main()
{
	vector<int> ivec;
	list<int> ilist;
	
	for(int i=1;i<=9;i++)
	  ivec.push_back(i);
	
	for(vector<int>::iterator iter=ivec.begin();
	    iter!=ivec.end();++iter)
	    cout<<*iter<<" ";
	cout<<endl;
	
    transform(ivec.begin(),ivec.end(),
	          ivec.begin(),negate<int>());
	
	for(vector<int>::iterator iter=ivec.begin();
	    iter!=ivec.end();++iter)
	    cout<<*iter<<" ";
	cout<<endl;
	
	transform(ivec.begin(),ivec.end(),
	back_inserter(ilist),bind2nd(multiplies<int>(),10));
	
	for(list<int>::iterator iter=ilist.begin();
	    iter!=ilist.end();++iter)
	    cout<<*iter<<" ";
	cout<<endl;
	
	transform(ilist.begin(),ilist.end(),
	  ostream_iterator<int>(cout," "),negate<int>());
	return 0;
} 
/*
1 2 3 4 5 6 7 8 9
-1 -2 -3 -4 -5 -6 -7 -8 -9
-10 -20 -30 -40 -50 -60 -70 -80 -90
*/
