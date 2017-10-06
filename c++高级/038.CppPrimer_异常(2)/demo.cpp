/*�쳣��νṹ
�쳣����-�����Լ����쳣��
�쳣����
�쳣�е����ݣ����ݳ�Ա
�����ô����쳣
	���쳣��ʹ���麯��
*/
#include<iostream>
using namespace std;
const int DefaultSize=10;

//��̬���� 
class Array
{
	private:
		int *pType;
		int itsSize;
	public:
		Array(int itsSize=DefaultSize);	
		~Array(){delete[] pType;}
		
		//���������
		int& operator[](int offSet);
		const int& operator[](int offSet) const; 
		//������accessors
		int GetitsSize() const {return itsSize;}  
		//�쳣�� 
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
					cout<<"�±귢������"<<itsSize<<endl;
				}
		};
		class xZero:public xSize{
			public:
				xZero(int size):xSize(size){}
				virtual void PrintError()
				{
					cout<<"�±겻����0!"<<endl;
				}
		};
		class xNegative:public xSize{
			public:
				xNegative(int size):xSize(size){}
				virtual void PrintError()
				{
					cout<<"�±겻���Ǹ�����"<<xSize::itsSize<<endl;
				}
		};
		class xTooSmall:public xSize{
			public:
				xTooSmall(int size):xSize(size){}
				virtual void PrintError()
				{
					cout<<"�±겻��С��10��"<<xSize::itsSize<<endl;
				}
		};
		class xTooBig:public xSize{
			public:
				xTooBig(int size):xSize(size){}
				virtual void PrintError()
				{
					cout<<"�±겻�ܴ���3000��"<<xSize::itsSize<<endl;
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
//		cout<<"����һ��"<<endl;
		for(int j=0;j<100;j++)
		{
			intArray[j]=j;
			cout<<"intArray["<<j<<"] okay..."<<endl;
		}
			
	}
	catch(Array::xBoundary)
	{
		cout<<"�±�Խ����!"<<endl;
	}
	catch(Array::xSize& exp)
	{
		exp.PrintError();
	}
//	catch(Array::xZero theException)
//	{
//		cout<<"�±겻����0!"<<endl;
//	}
//	catch(Array::xTooBig theException)
//	{
//		cout<<"�±겻�ܴ���30000!"<<theException.GetSize()<<endl;
//	}
//	catch(Array::xTooSmall theException)
//	{
//		cout<<"�±겻��С��10!"<<theException.GetSize()<<endl;
//	}
//	catch(Array::xNegative theException)
//	{
//		cout<<"�±겻���Ǹ���:"<<theException.GetSize()<<endl;
//	}
	catch(...)
	{
		cout<<"����δ֪�쳣!"<<endl;
	}
	cout<<"Done."<<endl;
	return 0;
} 
