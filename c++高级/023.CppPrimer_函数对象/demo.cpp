/*函数对象
重载函数调用操作符
函数对象：定义了调用操作符的类，其对象称为"函数对象"
一元函数对象
一元谓词
二元函数对象
二元谓词
*/
#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
using namespace std;

//class absInt
//{
//	public:
//		int operator() (int val)
//		{
//			
//		}
//};

struct absInt
{
	//重载操作符：函数调用操作符 
	int operator() (int val)
	{
		return val<0?-val:val;
	}
	
};

template<typename elementType>
void FuncDisplayElement(const elementType & element)
{
	cout<<element<<' ';
}

template<typename elementType>
struct DisplayElement
{
	//存储状态
	int m_nCount;
	
	DisplayElement()
	{
		m_nCount=0;
	}
	
	void operator() (const elementType& element) 
	{
		++m_nCount;
		cout<<element<<' ';
	}
};

int main()
{
	int i=-42;
	absInt absObj;
	unsigned int ui=absObj(i);
	
	cout<<ui<<endl;
	
	vector<int> a;
	for(int n=0;n<10;n++)
		a.push_back(n);
		
	list<char> b;
	for(char c='a';c<'k';++c)
		b.push_back(c);
		
	DisplayElement<int> mResult;
	mResult=for_each(a.begin(),a.end(),mResult);
	cout<<endl;
	cout<<"数量:"<<mResult.m_nCount<<endl;
	
	for_each(b.begin(),b.end(),DisplayElement<char>());
	cout<<endl; 
	return 0;
}
/*输出结果
42
0 1 2 3 4 5 6 7 8 9
数量:10
a b c d e f g h i j
*/ 
 
