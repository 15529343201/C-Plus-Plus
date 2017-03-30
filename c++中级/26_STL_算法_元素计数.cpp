//STL �㷨-Ԫ�ؼ���
/*
count
count_if
���������ĵ�Ч��Ա����
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

//ν��
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
	cout<<"��"<<num<<"��4"<<endl;
	
	//num=count_if(ivec.begin(),ivec.end(),isEven);
	//                                    parmal%2
	num=count_if(ivec.begin(),ivec.end(),bind2nd(modulus<int>(),2));
	cout<<"��"<<num<<"��ż��"<<endl;
	
	//                               //���������� �������� 
	//                                   parmal > 4 
	num=count_if(ivec.begin(),ivec.end(),not1(bind2nd(greater<int>(),4)));
	cout<<"��"<<num<<"��������4"<<endl;
	
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
	cout<<"multiset����"<<num<<"��7"<<endl;
	
	num=mset.count(7);
	cout<<"multiset����"<<num<<"��7"<<endl;
	
	return 0;
 } 
/*
1 2 3 4 5 6 7 8 9
��1��4
��5��ż��
��4��������4
1 2 2 3 4 5 6 7 7 8 9
multiset����2��7
multiset����2��7
*/
