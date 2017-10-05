/*����ָ���Ա
���ַ���
1.����ָ����(ǳ����)
  ����ȱ�㣺Ұָ��(����ָ��)
2.����ָ����(������)
  ����Ұָ��(����ָ��)
3.ֵ����(���)
*/
#include<iostream>
#include "plain-ptr.h"
#include "value-ptr.h" 
#include "smart-ptr.h"
using namespace std;

void test_AHasPtr()
{
	int i=42;
	AHasPtr p1(&i,42);
	AHasPtr p2=p1;
	cout<<p2.get_ptr_val()<<endl;
	
	p1.set_ptr_val(0);
	cout<<p2.get_ptr_val()<<endl;
	
	int *ip=new int(42);
	AHasPtr ptr(ip,10);
	cout<<ptr.get_ptr_val()<<endl;
	delete ip;
	cout<<ptr.get_ptr_val()<<endl;//Ұָ�� 
}

void test_CHasPtr()
{
	int obj=0;
	CHasPtr ptr1(obj,42);
	CHasPtr ptr2(ptr1);
	cout<<ptr1.get_ptr_val()<<","<<ptr1.get_int()<<endl;
	cout<<ptr2.get_ptr_val()<<","<<ptr2.get_int()<<endl;
	ptr2.set_ptr_val(6);
	ptr2.set_int(48);
	cout<<"�޸��Ժ�:"<<endl;
	cout<<ptr1.get_ptr_val()<<","<<ptr1.get_int()<<endl;
	cout<<ptr2.get_ptr_val()<<","<<ptr2.get_int()<<endl;
}

void test_BHasPtr()
{
	int obj=0;
	
	BHasPtr ptr1(&obj,42);
	BHasPtr ptr2(ptr1);
	cout<<ptr1.get_ptr_val()<<","<<ptr1.get_int()<<endl;
	cout<<ptr2.get_ptr_val()<<","<<ptr2.get_int()<<endl;
	cout<<"�޸��Ժ�"<<endl;
	ptr2.set_ptr_val(2);
	ptr2.set_int(22);
	cout<<ptr1.get_ptr_val()<<","<<ptr1.get_int()<<endl;
	cout<<ptr2.get_ptr_val()<<","<<ptr2.get_int()<<endl;
}

int main()
{
	cout<<"����ָ�룺"<<endl;
	test_AHasPtr();
	cout<<endl;
	cout<<"ֵ���ࣺ"<<endl; 
	test_CHasPtr();
	cout<<endl; 
	cout<<"����ָ�룺"<<endl;
	test_BHasPtr(); 
	return 0;
}
/*������
����ָ�룺
42
0
42
3234768

ֵ���ࣺ
0,42
0,42
�޸��Ժ�:
0,42
6,48

����ָ�룺
0,42
0,42
�޸��Ժ�
2,42
2,22
*/ 
