//˳�������Ĳ���(3)
/*
��ϵ�����
���е��������Ͷ�����ʹ��
�Ƚϵ��������������ͬ����������
�����ıȽ��ǻ���������Ԫ�صıȽ�
������Ԫ�ر�������Ӧ�Ĺ�ϵ�����
*/
#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<string>
using namespace std;

int main()
{
	vector<int> ivec1;
	vector<int> ivec2;
	vector<int> ivec3;
	vector<int> ivec4; 
	vector<int> ivec5;
	vector<double> dvec;
	list<int> ilst;
	deque<int> ideq;
	
	list<string> slst1;
	list<string> slst2;
	
	//��ͬ���Ͳ��ܱȽ� 
	//if(dvec>ivec3)
	
	ivec1.push_back(1);
	ivec1.push_back(3);
	ivec1.push_back(5);
	ivec1.push_back(7);
	ivec1.push_back(9);
	ivec1.push_back(12);
	
	ivec2.push_back(0);
	ivec2.push_back(2);
	ivec2.push_back(4);
	ivec2.push_back(6);
	ivec2.push_back(8);
	ivec2.push_back(10);
	ivec2.push_back(12);
	
	ivec3.push_back(1);
	ivec3.push_back(3);
	ivec3.push_back(9);
	
	ivec4.push_back(1);
	ivec4.push_back(3);
	ivec4.push_back(5);
	ivec4.push_back(7);
	
	ivec5.push_back(1);
	ivec5.push_back(3);
	ivec5.push_back(5);
	ivec5.push_back(7);
	ivec5.push_back(9);
	ivec5.push_back(12);
	
	if(ivec1>ivec2)
	  cout<<"ivec1 ��!"<<endl;
	if(ivec1!=ivec2)
	  cout<<"���������������!"<<endl;
	  
	if(ivec1==ivec5)
	  cout<<"ivec1��ivec5���!"<<endl;
	  
	if(ivec3>ivec1)
	  cout<<"ivec3����ivec1!"<<endl;
	  
	if(ivec1>ivec4)
	  cout<<"ivec1����ivec4!"<<endl;
	return 0;
}
/*
ivec1 ��!
���������������!
ivec1��ivec5���!
ivec3����ivec1!
ivec1����ivec4!
*/
 

