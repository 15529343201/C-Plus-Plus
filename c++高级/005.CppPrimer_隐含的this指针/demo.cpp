/*隐含的this指针
何时使用this指针
返回*this
从const成员函数返回*this
基于const的重载
可变数据成员
*/ 
#include<iostream>
#include<string>
using namespace std;

class Person
{
	private:
		string name;
		string address;
	public:
		Person(const string nm,string addr)
		{
			this->name=nm;
			this->address=addr;
		}
		string getName() const
		{
			return this->name;
		}
		string getAddress() const
		{
			return this->address;
		}
};

class Screen
{
	typedef string::size_type index;
	private:
		string contents;
		index cursor;
		index height,width;	
		mutable size_t access_ctr;//计数 
		
		void do_display(std::ostream &os) const
		{
			os<<contents;
		}
	public:
		Screen(index ht=0,index wd=0):contents(ht*wd,'A'),cursor(0),height(ht),width(wd),access_ctr(0) 
		{
			
		}
		char get() const
		{
			return contents[cursor];
		}
		char get(index r,index c) const
		{
			index row = r * width;
			return contents[row+c];
		}
		Screen& move(index r,index c);
		Screen& set(index,index,char);
		Screen& set(char);
		const Screen& display(std::ostream &os) const
		{
			++access_ctr;
			do_display(os);
			return *this;
		}
		Screen& display(std::ostream &os)
		{
			++access_ctr;
			do_display(os);
			return *this;
		}
};

Screen& Screen::set(index r,index c,char ch)
{
	index row = r * width;
	contents[row+c]=ch;
	return *this;
}

Screen& Screen::set(char c)
{
	contents[cursor] = c;
	return *this;
} 

Screen& Screen::move(index r,index c)
{
	index row = r * width;
	cursor = row + c;
	return *this;
}

int main()
{
	Person p("张飞","花园街5号");
	Person p2("刘备","花园街6号"); 
	cout<<p.getName()<<endl;
	cout<<p2.getName()<<endl;
	
	Screen myScreen(5,3); 
	cout<<myScreen.get()<<endl;
	myScreen.set(3,2,'B');
	cout<<myScreen.get(3,2)<<endl;
	
	//myScreen.move(2,3);
	//myScreen.set('C');
	//更简单的写法 
	myScreen.move(2,3).set('C').display(cout).set('K').display(cout);
	cout<<endl;
	myScreen.move(4,0).set('X').move(4,1).set('Y').move(4,3).set('Z').display(cout);
	cout<<endl;
	cout<<myScreen.get()<<endl;	
	myScreen.display(cout);
	cout<<endl;
	
	myScreen.display(cout);
	cout<<endl;
	return 0;
}
