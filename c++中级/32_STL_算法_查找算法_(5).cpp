#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool doubled(int elem,int elem2)
{
	return elem*2==elem2; 
}

int main()
{
	vector<int> ivec;
	
	ivec.push_back(1);
	ivec.push_back(3);
	ivec.push_back(6);
	ivec.push_back(6);
	ivec.push_back(5);
	ivec.push_back(5);
	ivec.push_back(0);
	
	for(vector<int>::iterator iter=ivec.begin();
	    iter!=ivec.end();++iter)
	    cout<<*iter<<" ";
	cout<<endl;
	
	vector<int>::iterator pos;
	//������������ȵ� 
	pos=adjacent_find(ivec.begin(),ivec.end());
	if(pos!=ivec.end())
	  cout<<"�ҵ���,λ��: "<<distance(ivec.begin(),pos)+1<<endl;
	else
	  cout<<"û�ҵ�!"<<endl;
	
	pos=adjacent_find(ivec.begin(),ivec.end(),doubled);
	if(pos!=ivec.end())
	  cout<<"�ҵ��ˣ�λ��: "<<distance(ivec.begin(),pos)+1<<endl;
	else
	  cout<<"û�ҵ�"<<endl;
	return 0;
}
/*
1 3 6 6 5 5 0
�ҵ���,λ��: 3
�ҵ��ˣ�λ��: 2
*/
