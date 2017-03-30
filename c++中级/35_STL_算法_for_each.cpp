/*
STL算法 for_each
for_each(b,e,p)
使用for_each()算法遍历数据
使用for_each()和函数对象修改数据
使用for_each()的返回值
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void print(int elem)
{
	cout<<elem<<" ";
}

template<class T>
class AddValue
{
	private:
		T theValue;
	
	public:
		AddValue(const T& v):theValue(v){
			
		}
		
		void operator() (T& elem) const
		{
			elem+=theValue;
		}
	
	
};

class MeanValue
{
	private:
		long num;
		long sum;
	public:
		MeanValue():num(0),sum(0){
			
		}
		void operator() (int elem)
		{
			num++;
			sum+=elem;
		}
		double value()
		{
			return static_cast<double>(sum)/static_cast<double>(num);
		}
		operator double()
		{
			return static_cast<double>(sum)/static_cast<double>(num);
		}
};

int main()
{
	vector<int> ivec;
	for(int i=1;i<=9;++i)
	  ivec.push_back(i);
	
	for_each(ivec.begin(),ivec.end(),print);
	cout<<endl;
	
	MeanValue mv=for_each(ivec.begin(),ivec.end(),MeanValue());
    cout<<"平均值: "<<mv.value()<<endl;
	
	for_each(ivec.begin(),ivec.end(),AddValue<int>(10));
	
	for_each(ivec.begin(),ivec.end(),print);
	cout<<endl;
	
    double	result=for_each(ivec.begin(),ivec.end(),MeanValue());
    cout<<"平均值: "<<result<<endl;

}
/*
1 2 3 4 5 6 7 8 9
平均值: 5
11 12 13 14 15 16 17 18 19
平均值: 15
*/
