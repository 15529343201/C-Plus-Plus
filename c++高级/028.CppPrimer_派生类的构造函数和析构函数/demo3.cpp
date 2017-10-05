#include<iostream>
using namespace std;

enum BREED{
	GOLDEN,CAIRN,DANDIE,SHETLAND,DOBERMAN,LAB
};

class Mammal
{
	protected:
		int itsAge;
		int itsWeight;
	public:
		Mammal();
		~Mammal();
		
		int GetAge() const
		{
			return itsAge;
		}
		void SetAge(int age)
		{
			itsAge=age;
		}
		int GetWeight() const
		{
			return itsWeight;
		}
		void SetWeight(int weight)
		{
			itsWeight=weight;
		}
		
		void Speak() const
		{
			cout<<"Mammal������!\n";
		}
		void Sleep() const
		{
			cout<<"shhh,I'm sleeping.\n";
		}	
};

class Dog:public Mammal
{
	private:
		BREED itsBreed;
	public:
		Dog();
		~Dog();
		
		BREED getBreed() const
		{
			return itsBreed;
		}
		void SetBreed(BREED breed)
		{
			itsBreed=breed;
		}
		
		void WagTail() const
		{
			cout<<"Tail wagging...\n";
		}
		void BegForFood() const
		{
			cout<<"Begging for food...\n";
		}
};

Mammal::Mammal():itsAge(3),itsWeight(5)
{
	cout<<"Mammal�Ĺ��캯��������..."<<endl;
}

Mammal::~Mammal()
{
	cout<<"Mammal����������������..."<<endl;
}

Dog::Dog():itsBreed(GOLDEN)
{
	cout<<"Dog�Ĺ��캯��������..."<<endl;
}

Dog::~Dog()
{
	cout<<"Dog����������������..."<<endl;
}




int main()
{
	Dog Fido;
	Fido.Speak();
	Fido.WagTail();
	cout<<"Fido is "<<Fido.GetAge()<<" years old"<<endl;
	return 0;
}
/*������
Mammal�Ĺ��캯��������...
Dog�Ĺ��캯��������...
Mammal������!
Tail wagging...
Fido is 3 years old
Dog����������������...
Mammal����������������...
*/ 
