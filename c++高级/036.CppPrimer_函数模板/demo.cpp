/*函数模板
函数模板 -> 实例化 -> 函数
模板形参
template<typename T>
template<class T>
四个例子
*/ 
#include<iostream>
#include<string>
#include<fstream>
#include<sstream>
using namespace std;

//int compare(const double &v1,const double &v2)
//{
//	if(v1<v2) return -1;
//	if(v1>v2) return 1;
//	return 0;
//}
//
//int compare(const string &v1,const string &v2)
//{
//	if(v1<v2) return -1;
//	if(v1>v2) return 1;
//	return 0;
//}

template<typename T>
int compare(const T &v1,const T &v2)
{
	if(v1<v2) return -1;
	if(v1>v2) return 1;
	return 0;
}

template<class T>
T absVal(T val)
{
	return val>0?val:-val;
}

template<typename T1,typename T2>
T1& print(T1& s,T2 val)
{
	s<<val;
	return s;
}

template<class T>
const T& bigger(const T& v1,const T& v2)
{
	return v1>v2?v1:v2;
}

int main()
{
	double dval=-0.88;
	float fval=-12.3;
	string oristr="this is a test";
	string desstr;
	ostringstream oss(desstr);
	ofstream outFile("result.dat");
	
	print(cout,-3)<<endl;
	print(cout,dval)<<endl;
	print(cout,fval)<<endl;
	print(cout,oristr)<<endl;
	cout<<endl;
	
	print(outFile,-3)<<endl;
	print(outFile,dval)<<endl;
	print(outFile,fval)<<endl;
	print(outFile,oristr)<<endl;
	outFile.close();
	cout<<endl;
	
	print(oss,-3)<<endl;
	print(oss,dval)<<endl;
	print(oss,fval)<<endl;
	print(oss,oristr)<<endl;
	cout<<oss.str()<<endl;
	cout<<endl;
	
	cout<<absVal(dval)<<endl;
	cout<<absVal(fval)<<endl;
	cout<<endl;
	
	
	double d1=1.23;
	double d2=9.56;
	cout<<compare(d1,d2)<<endl;
	cout<<endl;
	
	string s1("hi");
	string s2("world");
	cout<<compare(s1,s2)<<endl;
	cout<<endl;
	
	double a=1.23;
	double b=2.89;
	cout<<bigger(a,b)<<endl;
	
	return 0;
}
/*输出结果
-3
-0.88
-12.3
this is a test


-3
-0.88
-12.3
this is a test


0.88
12.3

-1

-1

2.89
*/ 
