/*�ඨ��
���Ա
���캯��
��Ա����
���ʱ��ʵʩ����ͷ�װ
public
private
protected
*/
#include<iostream>
using namespace std;

//������Ŀ --> ���۵� 
class Sales_item
{
	private:
		string isbn;//���
		unsigned units_sold;//��������
		double revenue;//�ܽ��
	public:
		Sales_item(string book,unsigned units,double amount) 
			:isbn(book),units_sold(units),revenue(amount){
				
			}
		double avg_price() const
		{
			if(units_sold)
				return revenue / units_sold;
			else
				return 0;
		}
		bool same_isbn(const Sales_item &rhs) const
		{
			return isbn == rhs.isbn;
		}
		void add(const Sales_item &rhs)
		{
			units_sold += rhs.units_sold;
			revenue += rhs.revenue;
		}
};

class Person
{
	//��Ա 
	private:
		string name;
		string address;
	public:
		Person(const string nm,const string addr):name(nm),address(addr){
			//name=nm;
			//address=addr;
		}
		string getName() const {
			return name;
		}
		string getAddress() const {
			return address;
		}
};

int main()
{
	Person a("�ŷ�","��԰��5��");
	a.getAddress();
	a.getName();
	cout<<a.getName()<<" "<<a.getAddress()<<endl;
	
	Sales_item x("0-399-82477-1",2,20.00);
	Sales_item y("0-399-82477-1",6,48.00);
	
	if(x.same_isbn(y))
		x.add(y);
		
	cout<<"�������۵���ƽ���ۣ�"<<x.avg_price()<<endl;
	
	cout<<"Hello ��!"<<endl;
	return 0;
}
