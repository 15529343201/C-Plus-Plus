//STL 算法-元素计数
/*
count
count_if
关联容器的等效成员函数
  1.set.count
  2.multiset.count
  3.map.count
  4.multimap.count
*/
#include<iostream>
#include<algorithm>
#include<map>
#include<vector>
#include<functional>
#include<set>
using namespace std;

//谓词
//bool isEven(int elem)
//{
//	return elem%2==0;
//} 

int main()
{
	vector<int> ivec;
	for(int i=1;i<=9;++i)
	  ivec.push_back(i);
	
	for(vector<int>::iterator iter=ivec.begin();
	    iter!=ivec.end();++iter)
	    {
	    	cout<<*iter<<" ";
		}
		cout<<endl;
	
	int num;
	
	num=count(ivec.begin(),ivec.end(),4);
	cout<<"有"<<num<<"个4"<<endl;
	
	//num=count_if(ivec.begin(),ivec.end(),isEven);
	//                                    parmal%2
	num=count_if(ivec.begin(),ivec.end(),bind2nd(modulus<int>(),2));
	cout<<"有"<<num<<"个偶数"<<endl;
	
	//                               //函数适配器 函数对象 
	//                                   parmal > 4 
	num=count_if(ivec.begin(),ivec.end(),not1(bind2nd(greater<int>(),4)));
	cout<<"有"<<num<<"个数大于4"<<endl;
	
	multiset<int> mset;
	for(int i=1;i<=9;++i)
	{
		mset.insert(mset.end(),i);
	}
	mset.insert(2);
	mset.insert(7);
	
	for(multiset<int>::iterator iter=mset.begin();
	    iter!=mset.end();++iter)
	    {
	    	cout<<*iter<<" ";
		}
		cout<<endl;
		
	num=count(mset.begin(),mset.end(),7);
	cout<<"multiset里有"<<num<<"个7"<<endl;
	
	num=mset.count(7);
	cout<<"multiset里有"<<num<<"个7"<<endl;
	
	return 0;
 } 
/*
1 2 3 4 5 6 7 8 9
有1个4
有5个偶数
有4个数大于4
1 2 2 3 4 5 6 7 7 8 9
multiset里有2个7
multiset里有2个7
*/
