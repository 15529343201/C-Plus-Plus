//˳������ STL deque��
/*
deque��һ����̬����
deque��vector�ǳ�����
deque���������鿪ͷ��ĩβ�����ɾ������
*/
#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;

int main()
{
	deque<int> a;
	a.push_back(3);
	a.push_back(4);
	a.push_back(5);
	
	a.push_front(2);
	a.push_front(1);
	a.push_front(0);
	
	for(size_t nCount=0; nCount<a.size();++nCount)
	{
		cout<<a[nCount]<<endl;
	}
	
	a.pop_front();
	a.pop_back();
	
	cout<<"-------"<<endl;
	
	for(size_t nCount=0; nCount<a.size();++nCount)
	{
		cout<<"a["<<nCount<<"] = ";
		cout<<a[nCount]<<endl;
	}
	
    cout<<"-------"<<endl;
    
	//ʹ�õ�����
	deque<int>::iterator iElementLocater;
	for(iElementLocater = a.begin();
	    iElementLocater != a.end();
	    ++iElementLocater)
	{
		size_t nOffset = distance(a.begin(),iElementLocater);
		cout<<"a["<<nOffset<<"] = "<<*iElementLocater<<endl;
	}
	
	return 0;
}
/*
������������� 
0
1
2
3
4
5
-------
a[0] = 1
a[1] = 2
a[2] = 3
a[3] = 4
-------
a[0] = 1
a[1] = 2
a[2] = 3
a[3] = 4
*/
