//STLËã·¨-Ìî³äĞÂÖµ
/*
fill(b,e,v)
fill_n(b,n,v)
generate(b,e,p)
generate_n(b,n,p)
*/
#include<iostream>
#include<algorithm>
#include<vector>
#include<list> 
#include<string>
#include<iterator> 
using namespace std;

int main()
{
	list<string> slist;
	slist.push_back("hello");
	slist.push_back("hi");
	slist.push_back("good morning");
	
	fill(slist.begin(),slist.end(),"hao");
	for(list<string>::iterator iter=slist.begin();
	    iter!=slist.end();++iter)
	    cout<<*iter<<" ";
	cout<<endl;
	
	list<string> slist2;
	fill_n(back_inserter(slist2),9,"hello");
	for(list<string>::iterator iter=slist2.begin();
	   iter!=slist2.end();++iter)
	   cout<<*iter<<" ";
	cout<<endl;
	
	fill_n(ostream_iterator<float>(cout," "),10,7.7);
	cout<<endl;
	
	fill(slist2.begin(),slist2.end(),"again");
	for(list<string>::iterator iter=slist2.begin();
	   iter!=slist2.end();++iter)
	   cout<<*iter<<" ";
	cout<<endl;
	
	fill_n(slist2.begin(),slist2.size()-2,"hi");
	for(list<string>::iterator iter=slist2.begin();
	   iter!=slist2.end();++iter)
	   cout<<*iter<<" ";
	cout<<endl;
	
	list<string>::iterator pos1,pos2;
	pos1=slist2.begin();
	pos2=slist2.end();
	
	fill(++pos1,--pos2,"hmmm");
	for(list<string>::iterator iter=slist2.begin();
	   iter!=slist2.end();++iter)
	   cout<<*iter<<" ";
	cout<<endl;
	
	list<int> ilist;
	
	generate_n(back_inserter(ilist),5,rand);
	for(list<int>::iterator iter=ilist.begin();
	   iter!=ilist.end();++iter)
	   cout<<*iter<<" ";
	cout<<endl;
	
	generate(ilist.begin(),ilist.end(),rand);
	for(list<int>::iterator iter=ilist.begin();
	   iter!=ilist.end();++iter)
	   cout<<*iter<<" ";
	cout<<endl;
	
	return 0;
}
/*
hao hao hao
hello hello hello hello hello hello hello hello hello
7.7 7.7 7.7 7.7 7.7 7.7 7.7 7.7 7.7 7.7
again again again again again again again again again
hi hi hi hi hi hi hi again again
hi hmmm hmmm hmmm hmmm hmmm hmmm hmmm again
41 18467 6334 26500 19169
15724 11478 29358 26962 24464
*/
