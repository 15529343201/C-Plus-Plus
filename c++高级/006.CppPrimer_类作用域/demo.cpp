/*��������
1.ʹ����ĳ�Ա
2.���������Ա����
3.�βα�ͺ����崦������������
4.�����������Ͳ�һ��������������
���������е����ֲ���
1.���Ա���������ֲ���
2.���Ա�����е����ֲ���
3.���Ա��ѭ����Ŀ����������ֲ���
4.����������֮�������������в���
5.��������֮������Χ�������в���
*/
#include<iostream>
#include<string> 
using namespace std;

void doA()
{
	int a;
	a = 12;
}

void doB()
{
	int b;
	b = 99;
}

class First
{
	public:
		int memi;
		double memd;
		void doC()
		{
			memi = 22;
		}
		void doD()
		{
			doC();
		}
};

int height;//ȫ��������ı��� 

class ScreenB
{
	public:
		typedef string::size_type index;	
		void dummy_fcn(index height)
		{
			cursor = width*height;
			//cursor=width*this->height;
			//cursor = width*::height;
		}	
	private:
		index cursor;
		index height,width;
};

class ScreenA
{
	public:
		typedef string::size_type index;
		char get(index r,index c) const;
		index get_cursor() const;
	private:
		string contents;
		index cursor;
		index height,width;
		
};

ScreenA::index ScreenA::get_cursor() const
{
	return cursor;
}

char ScreenA::get(index r,index c) const
{
	index row = r * width;
	return contents[row+c];
}
int main()
{
	ScreenA::index ht;
	ScreenA sa;
	
	ScreenB b;
	
	//a = 8;
	//b = 88;
	doA();
	doB();
	//memi=12;
	First obj;
	First *ptr=&obj;
	obj.memi=12;
	obj.doC();
	ptr->memi=99;
	ptr->doC();
	return 0;
} 
