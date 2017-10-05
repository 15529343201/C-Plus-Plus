/*ת��������
ת������
operator int() const;
ע�⣺
1.�����ǳ�Ա����
2.����ָ����������
3.�βα�����ǿյ�
4.������ʾ�ط���һ��ָ�����͵�ֵ
5.��Ӧ�øı䱻ת������ͨ������Ϊconst
*/ 
#include<iostream>
#include<string>
#include "Sales_item.h"
using namespace std;

class Dog
{
	public:
		Dog(string n,int a,double w):name(n),age(a),weight(w)
		{
				
		}
		operator int() const
		{
			return age;
		}
		operator double() const
		{
			return weight;
		}
	private:
		int age;
		double weight;
		string name;
};

int main()
{
	int a,b;
	
	a=10;
	b=a;
	
	Dog d("Bill",6,15.0);
	b=d;
	cout<<b<<endl;
	
	Sales_item item("x-123-7890",10,120.0);
	cout<<item<<endl;
	
	double m;
	m=item;
	cout<<m<<endl;
	return 0;
} 
/*������
6
x-123-7890      10      120     12
120
*/
 
