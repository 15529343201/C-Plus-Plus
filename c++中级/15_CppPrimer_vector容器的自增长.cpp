//vector������������
/*
vector����������������
   �����ȱ����ŵ�
capacity��reserve��Ա
*/
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int a[10];
	a[0]=10;
	a[1]=20;
	a[9]=99;
	
	int b[100];
	
	vector<int> ivec;
	cout<<"��С: "<<ivec.size()<<", ����: "<<ivec.capacity()<<endl;
	
	ivec.push_back(10);
	cout<<"��С: "<<ivec.size()<<", ����: "<<ivec.capacity()<<endl;
	ivec.push_back(20);
	cout<<"��С: "<<ivec.size()<<", ����: "<<ivec.capacity()<<endl;
	ivec.push_back(30);
	cout<<"��С: "<<ivec.size()<<", ����: "<<ivec.capacity()<<endl;
	ivec.push_back(40);
	cout<<"��С: "<<ivec.size()<<", ����: "<<ivec.capacity()<<endl;
	ivec.push_back(50);
	cout<<"��С: "<<ivec.size()<<", ����: "<<ivec.capacity()<<endl;
	ivec.push_back(60);
	cout<<"��С: "<<ivec.size()<<", ����: "<<ivec.capacity()<<endl;
	ivec.push_back(70);
	cout<<"��С: "<<ivec.size()<<", ����: "<<ivec.capacity()<<endl;
	ivec.push_back(80);
	cout<<"��С: "<<ivec.size()<<", ����: "<<ivec.capacity()<<endl;
	ivec.push_back(90);
	cout<<"��С: "<<ivec.size()<<", ����: "<<ivec.capacity()<<endl;
	ivec.push_back(100);
	cout<<"��С: "<<ivec.size()<<", ����: "<<ivec.capacity()<<endl;
	ivec.push_back(110);
	ivec.push_back(120);
	ivec.push_back(130);
	cout<<"��С: "<<ivec.size()<<", ����: "<<ivec.capacity()<<endl;
	ivec.push_back(140);
	cout<<"��С: "<<ivec.size()<<", ����: "<<ivec.capacity()<<endl;
	ivec.push_back(150);
	ivec.push_back(160);
	ivec.push_back(170);
	ivec.push_back(180);
	ivec.push_back(190);
	cout<<"��С: "<<ivec.size()<<", ����: "<<ivec.capacity()<<endl;
	ivec.push_back(200);
	cout<<"��С: "<<ivec.size()<<", ����: "<<ivec.capacity()<<endl;
	
	ivec.reserve(100);
	cout<<"��С: "<<ivec.size()<<", ����: "<<ivec.capacity()<<endl;
	
	while(ivec.size()!=ivec.capacity())
	  ivec.push_back(99);
	cout<<"��С: "<<ivec.size()<<", ����: "<<ivec.capacity()<<endl;
	
	ivec.push_back(88);
	cout<<"��С: "<<ivec.size()<<", ����: "<<ivec.capacity()<<endl;
	return 0;
}
/*
��С: 0, ����: 0
��С: 1, ����: 1
��С: 2, ����: 2
��С: 3, ����: 4
��С: 4, ����: 4
��С: 5, ����: 8
��С: 6, ����: 8
��С: 7, ����: 8
��С: 8, ����: 8
��С: 9, ����: 16
��С: 10, ����: 16
��С: 13, ����: 16
��С: 14, ����: 16
��С: 19, ����: 32
��С: 20, ����: 32
��С: 20, ����: 100
��С: 100, ����: 100
��С: 101, ����: 200
*/
