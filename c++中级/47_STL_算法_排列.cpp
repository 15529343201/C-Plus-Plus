//STL�㷨-�������
/*
next_permutation()��С�������� 
prev_permutation()�Ӵ�С���� 
*/ 

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	vector<int> ivec;
	 
	ivec.push_back(1);
	ivec.push_back(2);
	ivec.push_back(3);
	
	for(vector<int>::iterator iter=ivec.begin();
	  iter!=ivec.end();++iter)
	  cout<<*iter<<" ";
	cout<<endl;
	
	//next_permutation�������һ������true������false 
    while(next_permutation(ivec.begin(),ivec.end()))
    {
	
        for(vector<int>::iterator iter=ivec.begin(); 
	       iter!=ivec.end();++iter)
	       cout<<*iter<<" ";
	    cout<<endl;
    }
    
    cout<<endl<<endl;
    vector<int> ivec2;
    ivec2.push_back(3);
    ivec2.push_back(2);
    ivec2.push_back(1);
    
    for(vector<int>::iterator iter=ivec2.begin();
	  iter!=ivec2.end();++iter)
	  cout<<*iter<<" ";
	cout<<endl;
	
	while(prev_permutation(ivec2.begin(),ivec2.end()))
	{
		for(vector<int>::iterator iter=ivec2.begin();
	      iter!=ivec2.end();++iter)
	      cout<<*iter<<" ";
	    cout<<endl;
	}
	return 0;
}
/*
1 2 3
1 3 2
2 1 3
2 3 1
3 1 2
3 2 1


3 2 1
3 1 2
2 3 1
2 1 3
1 3 2
1 2 3
*/      
