/*��������
���캯������ȡ��Դ
�����������ͷ���Դ
�ϳɵ���������
������(rule of three)
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
			cout<<"���캯����������!"<<endl;
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
	cout<<"����������������!"<<endl;
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
/*������
���캯����������!
���캯����������!
hello
����������������!
����������������!
*/ 
