/*标准异常
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
			cout<<i<<":new Dog成功."<<endl;
		}	
	}
	catch(bad_alloc err)
	{
		cout<<"new Dog 失败:"<<err.what()<<endl;
	}
	
	
	return 0;
} 
/*输出结果
1:new Dog成功.
2:new Dog成功.
3:new Dog成功.
4:new Dog成功.
5:new Dog成功.
6:new Dog成功.
7:new Dog成功.
8:new Dog成功.
9:new Dog成功.
*/ 
