/*��̬��Ա��̳�
�����е�static��Ա���������̳в����ֻ��һ��ʵ��
���������з���static��Ա�ķ���
1.������::��Ա��
2.������::��Ա��
3.����.��Ա��
4.ָ��->��Ա��
5.��Ա��
*/ 
#include<iostream>
using namespace std;

class A
{
	public:
		static size_t object_count()
		{
			return 100;
		}
	protected:
		static const size_t obj_count=99;
		
};

class B:public A
{
	public:
		void f(const B &b,B *b2)
		{
			
			cout<<A::obj_count<<endl;
			cout<<B::obj_count<<endl;
			cout<<b.obj_count<<endl;
			cout<<b2->obj_count<<endl;
			cout<<obj_count<<endl;
			
			cout<<endl;
			
			cout<<A::object_count()<<endl;
			cout<<B::object_count()<<endl;
			cout<<b.object_count()<<endl;
			cout<<b2->object_count()<<endl;
			cout<<object_count()<<endl;
			
		}
};

class C:public B
{
	
};



int main()
{
	B b;
	b.f(b,&b);
	
	return 0;
}
/*������
99
99
99
99
99

100
100
100
100
100
*/ 
