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
		virtual ~Animal() {cout<<"Animal析构函数被调用...\n";}
		virtual int GetAge() {return itsAge;}
		virtual void SetAge(int age) {itsAge=age;}
};

Animal::Animal(int age):itsAge(age)
{
	cout<<"Animal的构造函数被调用...\n";
}

class Horse:virtual public Animal
{
	private:
		int itsHeight;
		COLOR itsColor;
	public:
		Horse(COLOR color,int height,int age);
		virtual ~Horse(){cout<<"Horse的析构函数被调用...\n";}
		virtual void Whinny() const {cout<<"Whinny!...";} 
		virtual int GetHeight() const {return itsHeight;}
		virtual COLOR GetColor() const {return itsColor;}
};

Horse::Horse(COLOR color,int height,int age):Animal(age),itsColor(color),itsHeight(height)
{
	cout<<"Horse构造函数被调用...\n";
}
class Bird:virtual public Animal
{
	private:
		bool itsMigration;
		COLOR itsColor;
	public:
		Bird(COLOR color,bool migrates,int age);
		virtual ~Bird() {cout<<"Bird的析构函数被调用...\n";}
		virtual void Chirp() const {cout<<"Chirp...";}
		virtual void Fly() const {cout<<"I can fly!I can fly!I can fly!";}
		virtual bool GetMigration() const { return itsMigration;}
		virtual COLOR GetColor() const {return itsColor;}
};

Bird::Bird(COLOR color,bool migrates,int age):Animal(age),itsColor(color),itsMigration(migrates)
{
	cout<<"Bird的构造函数被调用...\n";
}

class Pegasus:public Horse,public Bird
{
	private:
		long itsNumberBelievers;
	public:
		void Chirp() const {Whinny();}
		Pegasus(COLOR,int,bool,long,int);
		~Pegasus() {cout<<"Pegasus析构函数被调用...\n";}
		virtual long GetNumberBelievers() const{return itsNumberBelievers;}
};

Pegasus::Pegasus(COLOR aColor,int height,bool migrates,long numBelieve,int age)
	:Horse(aColor,height,age),Bird(aColor,migrates,age),itsNumberBelievers(numBelieve)
	,Animal(age)
	{
		cout<<"Pegasus构造函数被调用...\n";
	}

int main()
{
	Pegasus *pPeg=new Pegasus(Red,5,true,10,2);
	pPeg->Fly();
	pPeg->Whinny();
	pPeg->Chirp();
	cout<<"有"<<pPeg->GetNumberBelievers()<<"人相信世界上有飞马."<<endl;
	
	pPeg->Horse::GetColor();
	COLOR color=pPeg->Bird::GetColor();
	cout<<"飞马的颜色："<<color<<endl;
	
	//pPeg->GetAge();产生二义性，采用虚基类 
	
	delete pPeg;
	return 0;
}
/*
Animal的构造函数被调用...
Horse构造函数被调用...
Bird的构造函数被调用...
Pegasus构造函数被调用...
I can fly!I can fly!I can fly!Whinny!...Whinny!...有10人相信世界上有飞马.
飞马的颜色：0
Pegasus析构函数被调用...
Bird的析构函数被调用...
Horse的析构函数被调用...
Animal析构函数被调用...
*/
