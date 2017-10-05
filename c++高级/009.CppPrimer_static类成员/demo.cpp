/*static ���Ա
ʹ�����static��Ա���ŵ�
����static��Ա
ʹ�����static��Ա
static��Ա����
static���ݳ�Ա
*/
#include<iostream>
#include<string>
using namespace std;

//ȫ�ֱ���
//double interestRate;
 
class Account
{
	private:
		string owner;
		double amount;
		static double interestRate;//ֻ��һ�� 
		static const int period=30;
	public:
		Account(string name,double money):owner(name),amount(money)
		{
			
		}
		double getAmount() const
		{
			return this->amount;
		}
		void applyint()
		{
			amount+=amount*interestRate;
		}
		void deposit(double money)
		{
			this->amount+=money;
		}
		static double rate()
		{
			return interestRate;
		}
		static void rate(double newRate)
		{
			interestRate=newRate;
		}
};

//�����ʳ�ʼ�� 
double Account::interestRate=0.015;

int main()
{
	//interestRate=0.015;
	Account::rate(0.026);
	Account a("����",1000);
	Account b("����",2000);
	
	a.deposit(500);
	b.deposit(600);
	
	cout<<a.getAmount()<<endl;
	cout<<b.getAmount()<<endl;
	cout<<a.rate()<<endl;
	a.rate(0.018);
	cout<<b.rate()<<endl;
	
	Account::rate(0.02);
	a.applyint();
	b.applyint();
	cout<<a.getAmount()<<endl;
	cout<<b.getAmount()<<endl;
	
	return 0;
}
/*������
1500
2600
0.026
0.018
1530
2652
*/ 
