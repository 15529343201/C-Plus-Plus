/*异常层次结构
异常是类-创建自己的异常类
异常派生
异常中的数据：数据成员
按引用传递异常
	在异常中使用虚函数
*/
#include<iostream>
using namespace std;
const int DefaultSize=10;

//动态数组 
class Array
{
	private:
		int *pType;
		int itsSize;
	public:
		Array(int itsSize=DefaultSize);	
		~Array(){delete[] pType;}
		
		//运算符重载
		int& operator[](int offSet);
		const int& operator[](int offSet) const; 
		//访问器accessors
		int GetitsSize() const {return itsSize;}  
		//异常类 
		class xBoundary{};
		class xSize{
			protected:
				int itsSize;
			public:
				xSize(){}
				xSize(int size):itsSize(size){}
				~xSize(){}
				int GetSize() {return itsSize;}
				virtual void PrintError()
				{
					cout<<"下标发生错误："<<itsSize<<endl;
				}
		};
		class xZero:public xSize{
			public:
				xZero(int size):xSize(size){}
				virtual void PrintError()
				{
					cout<<"下标不能是0!"<<endl;
				}
		};
		class xNegative:public xSize{
			public:
				xNegative(int size):xSize(size){}
				virtual void PrintError()
				{
					cout<<"下标不能是负数："<<xSize::itsSize<<endl;
				}
		};
		class xTooSmall:public xSize{
			public:
				xTooSmall(int size):xSize(size){}
				virtual void PrintError()
				{
					cout<<"下标不能小于10："<<xSize::itsSize<<endl;
				}
		};
		class xTooBig:public xSize{
			public:
				xTooBig(int size):xSize(size){}
				virtual void PrintError()
				{
					cout<<"下标不能大于3000："<<xSize::itsSize<<endl;
				}
		};
};

Array::Array(int size):itsSize(size)
{
	if(size==0)
		throw xZero(size);
	else if(size<0)
		throw xNegative(size);
	else if(size>30000)
		throw xTooBig(size);
	else if(size<10)
		throw xTooSmall(size);
	pType=new int[size];
	for(int i=0;i<size;i++)
		pType[i]=0;
}

int& Array::operator[](int offSet)
{
	int size=this->GetitsSize();
	if(offSet>=0 && offSet<size)
		return pType[offSet];
	throw xBoundary();
}

const int& Array::operator[](int offSet) const
{
	int size=this->GetitsSize();
	if(offSet>=0 && offSet<size)
		return pType[offSet];
	throw xBoundary();
}


int main()
{
	Array a;
	Array b(12);
	
	Array intArray(20);
	
	try
	{
		Array c(-100);
//		b[6]=88;
//		b[22]=99;
//		cout<<b[6]<<endl;
//		cout<<"测试一下"<<endl;
		for(int j=0;j<100;j++)
		{
			intArray[j]=j;
			cout<<"intArray["<<j<<"] okay..."<<endl;
		}
			
	}
	catch(Array::xBoundary)
	{
		cout<<"下标越界了!"<<endl;
	}
	catch(Array::xSize& exp)
	{
		exp.PrintError();
	}
//	catch(Array::xZero theException)
//	{
//		cout<<"下标不能是0!"<<endl;
//	}
//	catch(Array::xTooBig theException)
//	{
//		cout<<"下标不能大于30000!"<<theException.GetSize()<<endl;
//	}
//	catch(Array::xTooSmall theException)
//	{
//		cout<<"下标不能小于10!"<<theException.GetSize()<<endl;
//	}
//	catch(Array::xNegative theException)
//	{
//		cout<<"下标不能是负数:"<<theException.GetSize()<<endl;
//	}
	catch(...)
	{
		cout<<"发生未知异常!"<<endl;
	}
	cout<<"Done."<<endl;
	return 0;
} 
