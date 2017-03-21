//重写程序，查找元素的值，并返回 
#include<iostream>
#include<vector>
using namespace std;

vector<int>::iterator findInt(vector<int>::iterator beg,
                              vector<int>::iterator end,
							  int ival)
{
	while(beg!=end)
	{
		if(*beg==ival)
		  break;
		else
		  ++beg;
		  
	}
	return beg;
}

int main()
{
	int ia[]={0,1,2,3,4,5,6};
	vector<int> ivec(ia,ia+7);//vector的构造函数
	vector<int>::iterator result=
	           findInt(ivec.begin(),ivec.end(),5);
	if(result==ivec.end())
	  cout<<"没找到!"<<endl;
	else
	  cout<<"找到了!"<<endl;
	
	return 0;
}
