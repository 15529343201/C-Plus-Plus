//search find_end()
#include<iostream>
#include<algorithm>
#include<deque>
#include<list> 
using namespace std;


int main()
{
	deque<int> ideq;
	list<int> ilist;
	
	for(int i=1;i<=7;++i)
	  ideq.insert(ideq.end(),i);
	  
	for(int i=1;i<=7;++i)
	  ideq.insert(ideq.end(),i);
	  
	for(int i=3;i<=6;++i)
	  ilist.insert(ilist.end(),i);
	  
	for(deque<int>::iterator iter=ideq.begin();
	    iter!=ideq.end();++iter)
	    cout<<*iter<<" ";
	cout<<endl;
	
	for(list<int>::iterator iter=ilist.begin();
	    iter!=ilist.end();++iter)
	    cout<<*iter<<" ";
	cout<<endl;
	
	deque<int>::iterator pos;
	pos=search(ideq.begin(),ideq.end(),
	    ilist.begin(),ilist.end());
	while(pos!=ideq.end())
	{
	
	  cout<<"�ҵ���!λ��:"<<distance(ideq.begin(),pos)+1<<endl;
//	else
//	  cout<<"û�ҵ�!"<<endl;
	
	++pos;
	pos=search(pos,ideq.end(),ilist.begin(),ilist.end());
//	if(pos!=ideq.end())
//	  cout<<"�ҵ���!λ��:"<<distance(ideq.begin(),pos)+1<<endl;
//	else
//	  cout<<"û�ҵ�!"<<endl;
    }
    
    cout<<"ʹ��find_end()���в���: "<<endl;
    pos=find_end(ideq.begin(),ideq.end(),ilist.begin(),ilist.end());
    if(pos!=ideq.end())
      cout<<"�ҵ��ˣ�λ��: "<<distance(ideq.begin(),pos)+1<<endl;
    else
      cout<<"û�ҵ�"<<endl;
    
    
    
    
	return 0;
}
/*
1 2 3 4 5 6 7 1 2 3 4 5 6 7
3 4 5 6
�ҵ���!λ��:3
�ҵ���!λ��:10
ʹ��find_end()���в���:
�ҵ��ˣ�λ��: 10
*/
