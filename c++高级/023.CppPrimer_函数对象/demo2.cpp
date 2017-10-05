/*一元谓词*/ 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

template<typename numberType>
struct IsMultiple
{
	numberType m_Divisor;
	
	IsMultiple(const numberType& divisor)
	{
		m_Divisor=divisor;
	}
	
	bool operator() (const numberType& element) const
	{
		return ((element%m_Divisor)==0);
	}
};

int main()
{
	vector<int> vecIntegers;
	for(int i=33;i<=100;++i)
		vecIntegers.push_back(i);
		
	IsMultiple<int> a(4);
	vector<int>::iterator iElement;	
	iElement=find_if(vecIntegers.begin(),vecIntegers.end(),a);
	if(iElement!=vecIntegers.end())
	{
		cout<<"第一个4的整数倍的数是："<<*iElement<<endl; 
	}
	
	

	return 0;
}
/*输出结果
第一个4的整数倍的数是：36
*/ 
