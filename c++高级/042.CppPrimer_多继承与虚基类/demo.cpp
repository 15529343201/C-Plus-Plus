#include<iostream>
using namespace std;

enum COLOR {
	Red,Green,Blue,Yellow,White,Black,Brown
};

class Animal
{
	private:
		int itsAge;
	public:
		Animal(int);
		virtual ~Animal() {cout<<"Animal��������������...\n";}
		virtual int GetAge() {return itsAge;}
		virtual void SetAge(int age) {itsAge=age;}
};

Animal::Animal(int age):itsAge(age)
{
	cout<<"Animal�Ĺ��캯��������...\n";
}

class Horse:virtual public Animal
{
	private:
		int itsHeight;
		COLOR itsColor;
	public:
		Horse(COLOR color,int height,int age);
		virtual ~Horse(){cout<<"Horse����������������...\n";}
		virtual void Whinny() const {cout<<"Whinny!...";} 
		virtual int GetHeight() const {return itsHeight;}
		virtual COLOR GetColor() const {return itsColor;}
};

Horse::Horse(COLOR color,int height,int age):Animal(age),itsColor(color),itsHeight(height)
{
	cout<<"Horse���캯��������...\n";
}
class Bird:virtual public Animal
{
	private:
		bool itsMigration;
		COLOR itsColor;
	public:
		Bird(COLOR color,bool migrates,int age);
		virtual ~Bird() {cout<<"Bird����������������...\n";}
		virtual void Chirp() const {cout<<"Chirp...";}
		virtual void Fly() const {cout<<"I can fly!I can fly!I can fly!";}
		virtual bool GetMigration() const { return itsMigration;}
		virtual COLOR GetColor() const {return itsColor;}
};

Bird::Bird(COLOR color,bool migrates,int age):Animal(age),itsColor(color),itsMigration(migrates)
{
	cout<<"Bird�Ĺ��캯��������...\n";
}

class Pegasus:public Horse,public Bird
{
	private:
		long itsNumberBelievers;
	public:
		void Chirp() const {Whinny();}
		Pegasus(COLOR,int,bool,long,int);
		~Pegasus() {cout<<"Pegasus��������������...\n";}
		virtual long GetNumberBelievers() const{return itsNumberBelievers;}
};

Pegasus::Pegasus(COLOR aColor,int height,bool migrates,long numBelieve,int age)
	:Horse(aColor,height,age),Bird(aColor,migrates,age),itsNumberBelievers(numBelieve)
	,Animal(age)
	{
		cout<<"Pegasus���캯��������...\n";
	}

int main()
{
	Pegasus *pPeg=new Pegasus(Red,5,true,10,2);
	pPeg->Fly();
	pPeg->Whinny();
	pPeg->Chirp();
	cout<<"��"<<pPeg->GetNumberBelievers()<<"�������������з���."<<endl;
	
	pPeg->Horse::GetColor();
	COLOR color=pPeg->Bird::GetColor();
	cout<<"�������ɫ��"<<color<<endl;
	
	//pPeg->GetAge();���������ԣ���������� 
	
	delete pPeg;
	return 0;
}
/*
Animal�Ĺ��캯��������...
Horse���캯��������...
Bird�Ĺ��캯��������...
Pegasus���캯��������...
I can fly!I can fly!I can fly!Whinny!...Whinny!...��10�������������з���.
�������ɫ��0
Pegasus��������������...
Bird����������������...
Horse����������������...
Animal��������������...
*/
