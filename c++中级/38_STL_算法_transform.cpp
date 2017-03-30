/*
STL �㷨-transform()
transform()�㷨��������ʽ
transform(b1,e1,b2,op)
transform(b1,e1,b2,b3,op)
ע��:
   1.���Ŀ����ԭĿ����ͬ��transform()�ͺ�for_each()һ��
   2.�������ĳֵ�滻���Ϲ����Ԫ�أ�Ӧʹ��replace()�㷨
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
