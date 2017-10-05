#include<iostream>
using namespace std;

class Base
{
	friend class Frnd;
	friend class D2;
	protected:
		int i;
	
};

class D1:public Base
{
	friend class Frnd;
	friend class D2;
	private:
		int j;
};

class Frnd
{
	public:
		int mem(Base b)
		{
			return b.i;
		}
		int mem(D1 d)
		{
			return d.j;
		}
	
};

class D2:public Frnd
{
	public:
		int mem(Base b)
		{
			return b.i;
		}
		int mem(D1 d)
		{
			return d.j;
		}
};


int main()
{
	Base a;
	D1 b;
	Frnd c;
	D2 d;
	return 0;
}
