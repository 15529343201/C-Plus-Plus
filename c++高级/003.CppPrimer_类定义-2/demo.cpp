/*�ඨ��(2)
ͬһ���͵Ķ�����ݳ�Ա
ʹ�����ͱ���������
��Ա�����ɱ�����-�������س�Ա����
�Է�ָ��inline��Ա����
*/
#include<iostream>
#include<string>
using namespace std;

class Screen
{
	typedef string::size_type index;
	
	private:
		string contents;
		index cursor;
		index height,width;
	public:
		
		Screen(index ht=0,index wd=0):contents(ht*wd,'A'),cursor(0),height(ht),width(wd)
		{
			
		}
		
		Screen(index ht,index wd,const string conts);
		
		char get() const;
		
		inline char get(index r,index c) const;
	
};

Screen::Screen(index ht,index wd,const string conts)
	:contents(conts),cursor(0),height(ht),width(wd)
	{
		
	}

inline char Screen::get() const
{
	return contents[cursor];
}

char Screen::get(index r,index c) const
{
	index row = r * width;
	return contents[row+c];
}
		
int main()
{
	Screen a(10,100);
	cout<<a.get()<<endl;
	cout<<a.get(8,8)<<endl;
	
	Screen b(3,6,"hello screen class");
	cout<<b.get()<<endl;
	cout<<b.get(1,2)<<endl;
	
	cout<<"����һ��"<<endl;
	return 0;
}
/*������
A
A
h
r
����һ��
*/ 
