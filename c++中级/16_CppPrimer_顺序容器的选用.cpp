//������ѡ��
/*
˳������ 
   1.vector���ŵ��ȱ��
   2.list���ŵ��ȱ��
   3.deque���ŵ��ȱ��
����������Ӱ��������ѡ��
Ԫ�صķ������Ӱ��������ѡ��
ѡ����������ʾ
*/
#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<algorithm>
using namespace std;

int main()
{
	vector<int> v;
	list<int> l;
	deque<int> d;
	
	d.push_back(50);
	d.push_front(10);
	
	v.push_back(10);
	v.push_back(90);
	v.push_back(50);
	vector<int>::iterator vi=v.begin();
	++vi;
	++vi;
	v.insert(vi,70);
	vi=v.begin();
	++vi;
	v.erase(vi);
	//���� 
	sort(v.begin(),v.end());
	if(binary_search(v.begin(),v.end(),70))
	  cout<<"�ҵ�70!"<<endl;
	else
	  cout<<"û�ҵ�70!"<<endl;
	
	l.push_back(10);
	l.push_back(90);
	l.push_back(50);
	list<int>::iterator li=l.begin();
	++li;
	++li;
	l.insert(li,70);
	li=l.begin();
	++li;
	l.erase(li);
	
	l.sort();
	if(binary_search(l.begin(),l.end(),70))
	  cout<<"�ҵ�70!"<<endl;
	else
	  cout<<"û�ҵ�70!"<<endl;
	
	return 0;
}
/*
�ҵ�70!
�ҵ�70!
*/
