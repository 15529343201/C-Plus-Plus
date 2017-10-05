/*深复制、浅复制
复制构造函数/拷贝构造函数
浅复制/浅拷贝/位拷 贝
深复制/深拷贝
*/ 
#include<iostream>
#include<string.h>
using namespace std;

class CDemo
{
	public:
		int a;
		char *str;
	public:
		CDemo(int pa,char *cstr)
		{
			this->a=pa;
			this->str=new char[104];
			strcpy(this->str,cstr);
		}
		//我没写，C++会自动帮我写一个复制构造函数 
		CDemo(CDemo& obj)
		{
			this->a=obj.a;
			//this->str=obj.str;//这里不对，要深复制，这是浅复制 
			this->str=new char[1024];
			if(str!=0)
				strcpy(this->str,obj.str);
		}
		~CDemo()
		{
			delete str;
		}
};
int main()
{
	CDemo A(10,"hello");
	
	CDemo B=A;//复制 
	cout<<"A:"<<A.a<<","<<A.str<<endl;
	cout<<"B:"<<B.a<<","<<B.str<<endl;
	B.a=8;
	B.str[0]='k';
	cout<<"修改以后:"<<endl;
	cout<<"A:"<<A.a<<","<<A.str<<endl;
	cout<<"B:"<<B.a<<","<<B.str<<endl;
	
	return 0;
}
/*输出结果
A:10,hello
B:10,hello
修改以后:
A:10,hello
B:8,kello
*/ 
