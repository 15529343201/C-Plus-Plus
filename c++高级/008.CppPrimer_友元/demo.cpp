/*��Ԫ-��Ԫ��������Ԫ��
��Ԫ��ϵ
������Ԫ 
1.��ͨ����
2.��
3.��ĳ�Ա���� 
*/
#include<iostream>
#include<string>
using namespace std;

class Screen;

class Dog
{
	public:
		int foo(Screen& screen);
		int koo(Screen& screen);
};


class Screen
{
	typedef string::size_type index;
	private:
		string contents;
		index cursor;
		int height,width;
	public:
		Screen(int ht=0,int wd=0):contents(ht*wd,' '),cursor(0),height(ht),width(wd)
		{
			
		}
		int area() const
		{
			return height*width;
		}
		friend int calcArea(Screen &);
		friend class Window_Mgr;
		//friend class Dog;
		friend int Dog::foo(Screen &); 
	
};

class Window_Mgr//���ڹ�����-��Screen���й��� 
{
	public:
		void relocate(int r,int c,Screen& s)
		{
			s.height+=r;
			s.width+=c;
		}
	
};

int Dog::foo(Screen& screen)
{
	return screen.height*screen.width;
}
int Dog::koo(Screen& screen)
{
	//return screen.height*screen.width;
	return screen.area();
}




//�������������ĳ�Ա���� 
int calcArea(Screen& screen)
{
	return screen.height*screen.width; 
}


int main()
{
	Screen a(60,100);
	cout<<a.area()<<endl;
	Window_Mgr vm;
	vm.relocate(20,100,a);
	cout<<calcArea(a)<<endl;
	
	Dog dog;
	cout<<dog.foo(a)<<endl;
	cout<<dog.koo(a)<<endl;
	
	cout<<"OK"<<endl;
	return 0;
}
/*������
6000
16000
16000
16000
OK
*/ 
