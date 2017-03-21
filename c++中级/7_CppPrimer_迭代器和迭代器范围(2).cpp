//编写一个函数，其形参是一对迭代器 
#include<iostream>
#include<vector>
using namespace std;

bool findInt(vector<int>::iterator beg,
             vector<int>::iterator end,
			 int ival);

int main()
{
	vector<int> a;
	a.push_back(2);
	a.push_back(9);
	a.push_back(12);
	a.push_back(7);
	a.push_back(28);
	
	vector<int>::iterator k1=a.begin();
	k1++;
	vector<int>::iterator k2=a.end();
	k2--;
	
	bool result=findInt(k1,k2,7);//前包后不包 
	if(result==true)
	  cout<<"找到!"<<endl;
	else
	  cout<<"未找到!"<<endl;
	
	
	
	return 0;
}

bool findInt(vector<int>::iterator beg,
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
	if(beg!=end)
	  return true;
	else
	  return false;
}
/*
找到!
*/
