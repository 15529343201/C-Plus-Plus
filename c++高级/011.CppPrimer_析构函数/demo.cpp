/*析构函数
构造函数：获取资源
析构函数：释放资源
合成的析构函数
三法则(rule of three)
*/
#include<iostream>
#include<string>
using namespace std;

class NoName
{
	private:
		string *pstring;
		int i;
		double d;
	public:
		NoName():pstring(new string),i(0),d(0)
		{
			cout<<"构造函数被调用了!"<<endl;
		}
		NoName(const NoName& other);
		~NoName();		
		NoName& operator=(const NoName &rhs);
};

NoName& NoName::operator=(const NoName &rhs)
{
	pstring=new string;
	*pstring=*(rhs.pstring);
	i=rhs.i;
	d=rhs.d;
	return *this;
}

NoName::NoName(const NoName& other)
{
	pstring=new string;
	*pstring=*(other.pstring);
	i=other.i;
	d=other.d;
}

NoName::~NoName()
{
	cout<<"析构函数被调用了!"<<endl;
	delete pstring;
}
int main()
{
	NoName a;
	
	NoName *p=new NoName;
	
	cout<<"hello"<<endl;
	delete p;
	return 0;
}
/*输出结果
构造函数被调用了!
构造函数被调用了!
hello
析构函数被调用了!
析构函数被调用了!
*/ 
