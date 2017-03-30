#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool checkEven(int elem,bool even)
{
	if(even)
	  return elem%2==0;
	else
	  return elem%2==1;
}

int main()
{
	vector<int> ivec;
	for(int i=1;i<=9;++i)
	  ivec.push_back(i);
	ivec.push_back(10);
	ivec.push_back(20);
	ivec.push_back(30);
	
	for(vector<int>::iterator iter=ivec.begin();
	    iter!=ivec.end();++iter)
	    cout<<*iter<<" ";
	cout<<endl;
	
	bool checkEvenArgs[3]={false,true,true};
	
	vector<int>::iterator pos;
	pos=search(ivec.begin(),ivec.end(),checkEvenArgs,checkEvenArgs+3,checkEven);
	if(pos!=ivec.end())
	  cout<<"找到了！位置: "<<distance(ivec.begin(),pos)+1<<endl;
	else
	  cout<<"没找到!"<<endl;
}
/*
1 2 3 4 5 6 7 8 9 10 20 30
找到了！位置: 9
*/
