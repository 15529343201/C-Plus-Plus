//STL �㷨-����ıȽ�
#include<iostream>
#include<algorithm>
#include<vector>
#include<list>
using namespace std;

bool bothEvenOrOdd(int elem1,int elem2)
{
	return elem1%2==elem2%2;
}

int main()
{
	vector<int> ivec;
	list<int> ilist;
	
	for(int i=1;i<=7;++i)
	  ivec.push_back(i);
	
	for(int i=3;i<=9;++i)
	  ilist.push_back(i);
	  
	for(vector<int>::iterator iter=ivec.begin();
	    iter!=ivec.end();++iter)
	    cout<<*iter<<" ";
	cout<<endl;
	
	for(list<int>::iterator iter=ilist.begin();
	    iter!=ilist.end();++iter)
	    cout<<*iter<<" ";
	cout<<endl;
	
	if(equal(ivec.begin(),ivec.end(),ilist.begin()))
	  cout<<"�������������"<<endl;
	else
	  cout<<"���������䲻���"<<endl; 
	  
	if(equal(ivec.begin(),ivec.end(),ilist.begin(),bothEvenOrOdd))
	{
		cout<<"������������������Ӧ������ż����Ӧż��"<<endl;
	}
	else
	{
			cout<<"���������䲻��������Ӧ������ż����Ӧż��"<<endl;
	} 
	return 0;
} 
/*
1 2 3 4 5 6 7
3 4 5 6 7 8 9
���������䲻���
������������������Ӧ������ż����Ӧż��
*/
