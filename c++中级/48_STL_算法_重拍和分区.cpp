//STL算法-重拍算法，分区算法
/*
random_shuffle()
partition()
stable_partition()
*/
/*
预定义的函数对象:
negate<type>()
plus<type>()
minus<type>()
multiplies<type>()
divides<type>()
modulus<type>()
equal_to<type>()
not_equal_to<type>()
less<type>()
greater<type>()
less_equal<type>()
greater_equal<type>()
logical_not<type>()
logical_and<type>()
logical_or<type>()
*/ 
/*
预定义的函数适配器
bind1st(op,value)
bind2nd(op,value)
not1(op)
not2(op)
mem_fun_ref(op)
mem_fun(op)
ptr_fun(op)
*/ 
#include<iostream> 
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	vector<int> ivec;
	vector<int> ivec2;
	vector<int> ivec3;
	
	for(int i=1;i<=9;++i)
	{
		ivec.push_back(i);
		ivec2.push_back(i);
		ivec3.push_back(i);
	}
	  
	
	for(vector<int>::iterator iter=ivec.begin();
	  iter!=ivec.end();++iter)
	  cout<<*iter<<" ";
	cout<<endl;
	
	//重排 
	random_shuffle(ivec.begin(),ivec.end());
	for(vector<int>::iterator iter=ivec.begin();
	  iter!=ivec.end();++iter)
	  cout<<*iter<<" ";
	cout<<endl<<endl;
	
	for(vector<int>::iterator iter=ivec2.begin();
	  iter!=ivec2.end();++iter)
	  cout<<*iter<<" ";
	cout<<endl;
	
	vector<int>::iterator pos1;//指向分区以后中间位置 
	pos1=partition(ivec2.begin(),ivec2.end(),not1(bind2nd(modulus<int>(),2)));
	
	for(vector<int>::iterator iter=ivec2.begin();
	  iter!=ivec2.end();++iter)
	  cout<<*iter<<" ";
	cout<<endl<<endl;
	
	for(vector<int>::iterator iter=ivec3.begin();
	  iter!=ivec3.end();++iter)
	  cout<<*iter<<" ";
	cout<<endl;
	
	vector<int>::iterator pos2;
	pos1=stable_partition(ivec3.begin(),ivec3.end(),not1(bind2nd(modulus<int>(),2)));
	
	for(vector<int>::iterator iter=ivec3.begin();
	  iter!=ivec3.end();++iter)
	  cout<<*iter<<" ";
	cout<<endl<<endl;
	return 0;
} 
/*
1 2 3 4 5 6 7 8 9
9 2 7 3 1 6 8 4 5

1 2 3 4 5 6 7 8 9
8 2 6 4 5 3 7 1 9

1 2 3 4 5 6 7 8 9
2 4 6 8 1 3 5 7 9
*/
