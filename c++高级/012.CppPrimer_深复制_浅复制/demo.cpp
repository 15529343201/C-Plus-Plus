/*��ơ�ǳ����
���ƹ��캯��/�������캯��
ǳ����/ǳ����/λ�� ��
���/���
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
		//��ûд��C++���Զ�����дһ�����ƹ��캯�� 
		CDemo(CDemo& obj)
		{
			this->a=obj.a;
			//this->str=obj.str;//���ﲻ�ԣ�Ҫ��ƣ�����ǳ���� 
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
	
	CDemo B=A;//���� 
	cout<<"A:"<<A.a<<","<<A.str<<endl;
	cout<<"B:"<<B.a<<","<<B.str<<endl;
	B.a=8;
	B.str[0]='k';
	cout<<"�޸��Ժ�:"<<endl;
	cout<<"A:"<<A.a<<","<<A.str<<endl;
	cout<<"B:"<<B.a<<","<<B.str<<endl;
	
	return 0;
}
/*������
A:10,hello
B:10,hello
�޸��Ժ�:
A:10,hello
B:8,kello
*/ 
