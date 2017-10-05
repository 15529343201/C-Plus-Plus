#include<iostream>
using namespace std;

enum COLOR{
	Red,Green,Blue,Yellow,White,Black,Brown
};

class Animal
{
	private:
		int itsAge;
	public:
		Animal(int);
		virtual ~Animal(){cout<<"Animal��������������...\n";}
		virtual int GetAge() const {return itsAge;}
		virtual void SetAge(int age) {itsAge=age;}
		virtual void Sleep() const=0;
		virtual void Eat() const=0;
		virtual void Reproduce() const=0;
		virtual void Move() const=0;
		virtual void Speak() const=0;
};

Animal::Animal(int age):itsAge(age)
{
	cout<<"Animal���캯��������...\n";
}

class Mammal:public Animal
{
	public:
		Mammal(int age):Animal(age)
		{
			cout<<"Mammal���캯��������...\n";
		}
		virtual ~Mammal() {cout<<"Mammal��������������...\n";}
		virtual void Reproduce() const
		{
			cout<<"Mammal reproduction depicted...\n";
		}
};

class Fish:public Animal
{
	public:
		Fish(int age):Animal(age)
		{
			cout<<"Fish�Ĺ��캯��������...\n";
		}
		virtual ~Fish()
		{
			cout<<"Fish����������������...\n";
		}
		virtual void Sleep() const {cout<<"fish snoring...\n";}
		virtual void Eat() const {cout<<"fish feeding...\n";}
		virtual void Reproduce() const {cout<<"fish laying eggs...\n";}
		virtual void Move() const {cout<<"fish swimming...\n";}
		virtual void Speak() const {}
};

class Horse:public Mammal
{
	protected:
		COLOR itsColor;
	public:
		Horse(int age,COLOR color):Mammal(age),itsColor(color)
		{
			cout<<"Horse�Ĺ��캯��������...\n";
		}
		virtual ~Horse()
		{
			cout<<"Horse����������������...\n";
		}
		virtual void Speak() const {cout<<"Whinny!...\n";}
		virtual void Sleep() const {cout<<"Horse snoring...\n";}
		virtual COLOR GetItsColor() const {return itsColor;}
		virtual void Eat() const {cout<<"Horse feeding...\n";}
		virtual void Move() const {cout<<"Horse running...\n";}
};

class Dog:public Mammal
{
	public:
		Dog(int age,COLOR color):Mammal(age),itsColor(color)
		{
			cout<<"Dog���캯��������...\n";
		}
		virtual ~Dog()
		{
			cout<<"Dog��������������...\n";
		}
		virtual void Speak() const {cout<<"Whoof...\n";}
		virtual void Sleep() const {cout<<"Dog snoring...\n";}
		virtual void Eat() const {cout<<"Dog eating...\n";}
		virtual void Move() const {cout<<"Dog running...\n";}
		virtual void Reproduce() const
		{
			cout<<"Dogs reproducing...\n";
		}
	protected:
		COLOR itsColor;
	
};



int main()
{
	Animal *pAnimal=0;
	int choice;
	bool fQuit=false;
	
	while(fQuit==false)
	{
		cout<<"(1)Dog (2)Horse (3)Fish (0)Quit:";
		cin>>choice;
		
		switch(choice)
		{
			case 1:
				pAnimal=new Dog(5,Brown);
				break;
			case 2:
				pAnimal=new Horse(4,Black);
				break;
			case 3:
				pAnimal=new Fish(5);
				break;
			default:
				fQuit=true;
				break;
		}
		if(fQuit==false)
		{
			pAnimal->Speak();
			pAnimal->Eat();
			pAnimal->Reproduce();
			pAnimal->Move();
			pAnimal->Sleep(); 
			delete pAnimal;
			cout<<endl;
		}
	}
	return 0;
}
/*������
(1)Dog (2)Horse (3)Fish (0)Quit:1
Animal���캯��������...
Mammal���캯��������...
Dog���캯��������...
Whoof...
Dog eating...
Dogs reproducing...
Dog running...
Dog snoring...
Dog��������������...
Mammal��������������...
Animal��������������...

(1)Dog (2)Horse (3)Fish (0)Quit:2
Animal���캯��������...
Mammal���캯��������...
Horse�Ĺ��캯��������...
Whinny!...
Horse feeding...
Mammal reproduction depicted...
Horse running...
Horse snoring...
Horse����������������...
Mammal��������������...
Animal��������������...

(1)Dog (2)Horse (3)Fish (0)Quit:3
Animal���캯��������...
Fish�Ĺ��캯��������...
fish feeding...
fish laying eggs...
fish swimming...
fish snoring...
Fish����������������...
Animal��������������...

(1)Dog (2)Horse (3)Fish (0)Quit:0
*/ 
