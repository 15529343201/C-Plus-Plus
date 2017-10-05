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
			cout<<"Mammal的声音!\n";
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
	cout<<"Mammal的构造函数被调用..."<<endl;
}

Mammal::~Mammal()
{
	cout<<"Mammal的析构函数被调用..."<<endl;
}

Dog::Dog():itsBreed(GOLDEN)
{
	cout<<"Dog的构造函数被调用..."<<endl;
}

Dog::~Dog()
{
	cout<<"Dog的析构函数被调用..."<<endl;
}




int main()
{
	Dog Fido;
	Fido.Speak();
	Fido.WagTail();
	cout<<"Fido is "<<Fido.GetAge()<<" years old"<<endl;
	return 0;
}
/*输出结果
Mammal的构造函数被调用...
Dog的构造函数被调用...
Mammal的声音!
Tail wagging...
Fido is 3 years old
Dog的析构函数被调用...
Mammal的析构函数被调用...
*/ 
