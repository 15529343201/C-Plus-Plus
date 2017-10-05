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
		virtual ~Animal(){cout<<"Animal析构函数被调用...\n";}
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
	cout<<"Animal构造函数被调用...\n";
}

class Mammal:public Animal
{
	public:
		Mammal(int age):Animal(age)
		{
			cout<<"Mammal构造函数被调用...\n";
		}
		virtual ~Mammal() {cout<<"Mammal析构函数被调用...\n";}
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
			cout<<"Fish的构造函数被调用...\n";
		}
		virtual ~Fish()
		{
			cout<<"Fish的析构函数被调用...\n";
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
			cout<<"Horse的构造函数被调用...\n";
		}
		virtual ~Horse()
		{
			cout<<"Horse的析构函数被调用...\n";
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
			cout<<"Dog构造函数被调用...\n";
		}
		virtual ~Dog()
		{
			cout<<"Dog析构函数被调用...\n";
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
/*输出结果
(1)Dog (2)Horse (3)Fish (0)Quit:1
Animal构造函数被调用...
Mammal构造函数被调用...
Dog构造函数被调用...
Whoof...
Dog eating...
Dogs reproducing...
Dog running...
Dog snoring...
Dog析构函数被调用...
Mammal析构函数被调用...
Animal析构函数被调用...

(1)Dog (2)Horse (3)Fish (0)Quit:2
Animal构造函数被调用...
Mammal构造函数被调用...
Horse的构造函数被调用...
Whinny!...
Horse feeding...
Mammal reproduction depicted...
Horse running...
Horse snoring...
Horse的析构函数被调用...
Mammal析构函数被调用...
Animal析构函数被调用...

(1)Dog (2)Horse (3)Fish (0)Quit:3
Animal构造函数被调用...
Fish的构造函数被调用...
fish feeding...
fish laying eggs...
fish swimming...
fish snoring...
Fish的析构函数被调用...
Animal析构函数被调用...

(1)Dog (2)Horse (3)Fish (0)Quit:0
*/ 
