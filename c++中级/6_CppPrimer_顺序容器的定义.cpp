//˳�������Ķ���
/*
˳������
vector
list
deque

˳������������
stack
queue
priority_queue
*/
#include<iostream>
#include<vector>
#include<list>
#include<deque>
using namespace std;

int main()
{
	vector<string> svec;//Ĭ�ϵĹ��캯�� 
	svec.push_back("hello");
	svec.push_back("C++");
	svec.push_back("STL");
	list<int> ilist;
	
	vector<int> ivec;//Ĭ�ϵĹ��캯��
	ivec.push_back(1);
	ivec.push_back(2);
	ivec.push_back(3);
	vector<int> ivec2(ivec); 
	
	//list<int> ilist(ivec);���� 
	list<string> slist(svec.begin(),svec.end());
	vector<string>::iterator mid = svec.begin() + svec.size()/2;
	deque<string> front(svec.begin(),mid);
	deque<string> back(mid,svec.end());
	
	char *words[]={"stately","plump","buck","mulligan"};
	size_t words_size=sizeof(words)/sizeof(char*);
	list<string> words2(words,words+words_size);
	
	//64���ַ���hello��list���г�ʼ�� 
	const list<int>::size_type list_size=64; 
	list<string> slist2(list_size,"Hello");
	
	list<int> ilist2(list_size);
	
	vector< vector<string> > lines;//������������� 
	list< vector<string> > lines2;
	 
	cout<<"�ɹ�!"<<endl;
	return 0;
} 
