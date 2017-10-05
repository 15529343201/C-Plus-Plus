/*���ƹ��캯���͸�ֵ������
���ƹ��캯�����������
1.����Ķ�����ʽ-���Ƴ�ʼ��
2.�β��뷵��ֵ
3.��ʼ������Ԫ��
4.���캯��������Ԫ��
��ֵ������
1.���ظ�ֵ������
2.�����븳ֵ��һ��ʹ��
�ϳɵĸ��ƹ��캯���͸�ֵ������
�����Լ��ĸ��ƹ��캯���͸�ֵ������
*/
#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Sales_item
{
	private:
		string isbn;
		unsigned units_sold;
		double revenue;
	public:
		//���캯�� 
		Sales_item():units_sold(0),revenue(0.0)
		{
			cout<<"Ĭ�ϵĹ��캯����������"<<endl;
		}
		Sales_item(const string book):isbn(book),units_sold(0),revenue(0.0)
		{
			cout<<"���캯��Sales_item(const string book)��������!"<<endl;
		}
		//C++Ĭ��д�������Լ�д 
		//���ƹ��캯��
		Sales_item(const Sales_item &orig):isbn(orig.isbn),
		units_sold(orig.units_sold),revenue(orig.revenue)
		{
			cout<<"���ƹ��캯����������!"<<endl;
		}
		//��ֵ������ 
		Sales_item& operator=(const Sales_item &rhs)
		{
			cout<<"��ֵ��������������!"<<endl;
			isbn=rhs.isbn;
			units_sold=rhs.units_sold;
			revenue=rhs.revenue;
			return *this;
		}
};

Sales_item foo(Sales_item item)
{
	Sales_item temp;
	temp=item;
	return temp;
}

class NoName
{
	private:
		string *pstring;
		int i;
		double d;
	public:
		NoName():pstring(new string),i(0),d(0)
		{
			
		}
		NoName(const NoName& other):pstring(new string(*(other.pstring))),i(other.i),d(other.d)
		{
			cout<<"NoName Copy Constructor"<<endl;
		}
		NoName& operator=(const NoName &rhs)
		{
			cout<<"NoName ��ֵ������"<<endl;
			pstring=new string;
			*pstring=*(rhs.pstring);
			
			i=rhs.i;
			d=rhs.d;
			return *this;
		}
};

int main()
{
	NoName x,y;
	NoName z(x);
	x=y;
	cout<<endl;
	
	
	Sales_item a;
	Sales_item b("0-201-78345-X");
	
	Sales_item c(b);
	a=b;
	
	Sales_item item=string("9-999-99999-9");
	
	cout<<"��һ��foo"<<endl;
	Sales_item ret;
	ret=foo(item);
	
	
	cout<<"��һ��vector"<<endl;
	vector<Sales_item> svec(5);
	
	cout<<"��һ������"<<endl;
	Sales_item primer_eds[] = {
		string("0-201-16487-6"),
		string("0-201-54848-8"),
		string("0-201-82470-1"),
		Sales_item()
	};
	return 0;
}
/*������
NoName Copy Constructor
NoName ��ֵ������

Ĭ�ϵĹ��캯����������
���캯��Sales_item(const string book)��������!
���ƹ��캯����������!
��ֵ��������������!
���캯��Sales_item(const string book)��������!
��һ��foo
Ĭ�ϵĹ��캯����������
���ƹ��캯����������!
Ĭ�ϵĹ��캯����������
��ֵ��������������!
��ֵ��������������!
��һ��vector
Ĭ�ϵĹ��캯����������
���ƹ��캯����������!
���ƹ��캯����������!
���ƹ��캯����������!
���ƹ��캯����������!
���ƹ��캯����������!
��һ������
���캯��Sales_item(const string book)��������!
���캯��Sales_item(const string book)��������!
���캯��Sales_item(const string book)��������!
Ĭ�ϵĹ��캯����������
*/ 
