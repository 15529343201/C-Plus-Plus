/*��׼�쳣
exception
runtime_error
rang_error
overflow_error
underflow_error
logic_error
domain_error
invalid_error
length_error
out_of_range
*/
#include<iostream>
#include<new>
using namespace std;

class Dog
{
	private:
		int *parr;
	public:
		Dog()
		{
			parr=new int[1000000];//4MB
		}
};
int main()
{
	Dog *pDog;
	try
	{
		for(int i=1;i<10;i++)//40GB!
		{
			pDog=new Dog();
			cout<<i<<":new Dog�ɹ�."<<endl;
		}	
	}
	catch(bad_alloc err)
	{
		cout<<"new Dog ʧ��:"<<err.what()<<endl;
	}
	
	
	return 0;
} 
/*������
1:new Dog�ɹ�.
2:new Dog�ɹ�.
3:new Dog�ɹ�.
4:new Dog�ɹ�.
5:new Dog�ɹ�.
6:new Dog�ɹ�.
7:new Dog�ɹ�.
8:new Dog�ɹ�.
9:new Dog�ɹ�.
*/ 
