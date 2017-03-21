//vector容器的自增长
/*
vector是用数组做出来的
   数组的缺点和优点
capacity和reserve成员
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
	cout<<"大小: "<<ivec.size()<<", 容量: "<<ivec.capacity()<<endl;
	
	ivec.push_back(10);
	cout<<"大小: "<<ivec.size()<<", 容量: "<<ivec.capacity()<<endl;
	ivec.push_back(20);
	cout<<"大小: "<<ivec.size()<<", 容量: "<<ivec.capacity()<<endl;
	ivec.push_back(30);
	cout<<"大小: "<<ivec.size()<<", 容量: "<<ivec.capacity()<<endl;
	ivec.push_back(40);
	cout<<"大小: "<<ivec.size()<<", 容量: "<<ivec.capacity()<<endl;
	ivec.push_back(50);
	cout<<"大小: "<<ivec.size()<<", 容量: "<<ivec.capacity()<<endl;
	ivec.push_back(60);
	cout<<"大小: "<<ivec.size()<<", 容量: "<<ivec.capacity()<<endl;
	ivec.push_back(70);
	cout<<"大小: "<<ivec.size()<<", 容量: "<<ivec.capacity()<<endl;
	ivec.push_back(80);
	cout<<"大小: "<<ivec.size()<<", 容量: "<<ivec.capacity()<<endl;
	ivec.push_back(90);
	cout<<"大小: "<<ivec.size()<<", 容量: "<<ivec.capacity()<<endl;
	ivec.push_back(100);
	cout<<"大小: "<<ivec.size()<<", 容量: "<<ivec.capacity()<<endl;
	ivec.push_back(110);
	ivec.push_back(120);
	ivec.push_back(130);
	cout<<"大小: "<<ivec.size()<<", 容量: "<<ivec.capacity()<<endl;
	ivec.push_back(140);
	cout<<"大小: "<<ivec.size()<<", 容量: "<<ivec.capacity()<<endl;
	ivec.push_back(150);
	ivec.push_back(160);
	ivec.push_back(170);
	ivec.push_back(180);
	ivec.push_back(190);
	cout<<"大小: "<<ivec.size()<<", 容量: "<<ivec.capacity()<<endl;
	ivec.push_back(200);
	cout<<"大小: "<<ivec.size()<<", 容量: "<<ivec.capacity()<<endl;
	
	ivec.reserve(100);
	cout<<"大小: "<<ivec.size()<<", 容量: "<<ivec.capacity()<<endl;
	
	while(ivec.size()!=ivec.capacity())
	  ivec.push_back(99);
	cout<<"大小: "<<ivec.size()<<", 容量: "<<ivec.capacity()<<endl;
	
	ivec.push_back(88);
	cout<<"大小: "<<ivec.size()<<", 容量: "<<ivec.capacity()<<endl;
	return 0;
}
/*
大小: 0, 容量: 0
大小: 1, 容量: 1
大小: 2, 容量: 2
大小: 3, 容量: 4
大小: 4, 容量: 4
大小: 5, 容量: 8
大小: 6, 容量: 8
大小: 7, 容量: 8
大小: 8, 容量: 8
大小: 9, 容量: 16
大小: 10, 容量: 16
大小: 13, 容量: 16
大小: 14, 容量: 16
大小: 19, 容量: 32
大小: 20, 容量: 32
大小: 20, 容量: 100
大小: 100, 容量: 100
大小: 101, 容量: 200
*/
