/*���캯��
���ã���֤ÿ����������ݳ�Ա���к��ʵĳ�ʼֵ
���캯����ʼʽ(��ʼ���б�)
Ĭ��ʵ���빹�캯��
Ĭ�Ϲ��캯��
��ʽ������ת��
���Ա����ʾ��ʼ��
*/
#include<iostream>
#include<string> 
using namespace std;

class Person
{
	public:
		string name;
		int age;
	public:
		Person(const string nm,int a):name(nm),age(a)
		{
			
		}
};

class Cat
{
	public:
		Cat(){
		}
		Cat(string nm):name(nm),age(0)
		{
			
		}
		string getName()
		{
			return this->name;
		}
		int getAge()
		{
			return this->age;
		}
	private:
		string name;
		int age;
};

class Dog
{
	public:
		Dog():legs(4)
		{
			//const,��������,û�й��캯���������Ա���ʹ�ó�ʼ���б� 
		}
	private:
		string name;
		const int legs;
};

class Sales_item
{
	public:
		Sales_item(const string book,int units,double price)
			:isbn(book),units_sold(units),revenue(price*units)
		{
			
		}
		explicit Sales_item(const string book=""):isbn(book),units_sold(0),revenue(0.0)
		{
			
		}
		explicit Sales_item(istream is)
		{
			is>>*this;
		}
		/*Sales_item():units_sold(0),revenue(0.0)
		{
			
		}*/
		Sales_item(int units,double price)
		{
			this->units_sold=units;
			this->revenue=price*units;
		}
		bool same_isbn(const Sales_item rhs) const
		{
			return isbn==rhs.isbn;
		}
		friend istream& operator>>(istream&,Sales_item&);
		
	private:
		string isbn;
		unsigned units_sold;
		double revenue;
};

inline istream& operator>>(istream& in,Sales_item& s)
{
	double price;
	in>>s.isbn>>s.units_sold>>price;
	if(in)
		s.revenue=s.units_sold*price;
	else
		s=Sales_item();
	return in;
}

class Data
{
	public:
		int ival;
		char *ptr;
};

class Eata
{
	public:
		Eata(int i,char *p):ival(i),ptr(p){
		}
	private:
		int ival;
		char *ptr;
};

int main()
{
	Data v = {9,"hello"};
	Eata w(9,"hello");
	Cat aCat;
	
	Person a("�ŷ�",22);
	cout<<a.name<<endl;
	cout<<a.age<<endl;
	
	Sales_item item1;
	Sales_item item2("0-201-82470-1");
	Sales_item *p = new Sales_item();
	const Sales_item item3;
	
	Sales_item myobj;
	if(myobj.same_isbn(item2))
	{
		cout<<"��ͬ"<<endl;
	}
	
	
	delete p; 
	return 0;
}
