/*友元-友元函数、友元类
友元关系
三种友元 
1.普通函数
2.类
3.类的成员函数 
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

class Window_Mgr//窗口管理类-对Screen进行管理 
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




//这个函数不是类的成员函数 
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
/*输出结果
6000
16000
16000
16000
OK
*/ 
