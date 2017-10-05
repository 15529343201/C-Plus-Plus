#include<iostream>
using namespace std;

//�������һ��������-������������ 
class Shape
{
	public:
		Shape(){}
		virtual ~Shape(){}
		virtual double GetArea()=0;
		virtual double GetPerim()=0;//���麯��
		virtual void Draw()=0;
};

//��Ϊ����һ�����麯�������Բ�д��һ��Ҳ��д! 
void Shape::Draw()
{
	cout<<"Abstract drawing ����!"<<endl;
}

class Circle:public Shape
{
	private:
		int itsRadius;
	public:
		Circle(int radius):itsRadius(radius){}
		virtual ~Circle(){}
		double GetArea()
		{
			return 3.14*itsRadius*itsRadius;
		}
		double GetPerim()
		{
			return 2*3.14*itsRadius;
		}
		void Draw();
	
};

void Circle::Draw()
{
	cout<<"Circle drawing routine here!\n";
	Shape::Draw();
}

class Rectangle:public Shape
{
	private:
		int itsWidth;
		int itsLength;
	public:
		Rectangle(int len,int width):itsWidth(width),itsLength(len){}
		virtual ~Rectangle(){}
		double GetArea() {return itsLength*itsWidth;}
		double GetPerim() {return 2*itsWidth+2*itsLength;}
		virtual int GetLength() {return itsLength;}
		virtual int GetWidth() {return itsWidth;}
		void Draw();
};

void Rectangle::Draw()
{
	for(int i=0;i<itsLength;i++)
	{
		for(int j=0;j<itsWidth;j++)
			cout<<"x";
		cout<<"\n";
	}
	Shape::Draw();
}

class Square:public Rectangle
{
	public:
		Square(int len);
		Square(int len,int width);
		virtual ~Square(){}
		double GetPerim() {return 4*GetLength();}
	
};

Square::Square(int len):Rectangle(len,len){}
Square::Square(int len,int width):Rectangle(len,width)
{
	if(GetLength()!=GetWidth())
		cout<<"Error,not a square... a Rectangle??\n";
}

int main()
{
	Circle a(8);
	a.Draw();
	
	Rectangle b(5,10);
	b.Draw();
	
	Square c(8);
	c.Draw();
	
	cout<<"---------------------------"<<endl;
	
	int choice;
	bool fQuit=false;
	Shape *sp;
	
	while(fQuit==false)
	{
		cout<<"(1)Circle (2)Rectangle (3)Square (0)Quit:";
		cin>>choice;
		
		switch(choice)
		{
			case 1:
				sp=new Circle(5);
				break;
			case 2:
				sp=new Rectangle(4,6);
				break;
			case 3:
				sp=new Square(5);
				break;
			case 0:
				fQuit=true;
				break;
		}
		if(fQuit==false)
		{
			sp->Draw();
			delete sp;
			cout<<endl;
		}
	}
	return 0;
}
/*������
Circle drawing routine here!
Abstract drawing ����!
xxxxxxxxxx
xxxxxxxxxx
xxxxxxxxxx
xxxxxxxxxx
xxxxxxxxxx
Abstract drawing ����!
xxxxxxxx
xxxxxxxx
xxxxxxxx
xxxxxxxx
xxxxxxxx
xxxxxxxx
xxxxxxxx
xxxxxxxx
Abstract drawing ����!
---------------------------
(1)Circle (2)Rectangle (3)Square (0)Quit:1
Circle drawing routine here!
Abstract drawing ����!

(1)Circle (2)Rectangle (3)Square (0)Quit:2
xxxxxx
xxxxxx
xxxxxx
xxxxxx
Abstract drawing ����!

(1)Circle (2)Rectangle (3)Square (0)Quit:3
xxxxx
xxxxx
xxxxx
xxxxx
xxxxx
Abstract drawing ����!

(1)Circle (2)Rectangle (3)Square (0)Quit:0
*/ 
