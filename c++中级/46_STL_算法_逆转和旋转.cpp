//STL算法-逆转和旋转
/*
reverse()
reverse_copy()
rotate()
rotate_copy()
*/
#include<iostream>
#include<algorithm>
#include<vector>
#include<iterator>
using namespace std;
 
int main()
{
	vector<int> ivec;
	
	for(int i=1;i<=9;++i)
	  ivec.push_back(i);
	
	for(vector<int>::iterator iter=ivec.begin();
	   iter!=ivec.end();++iter)
	   cout<<*iter<<" ";
	cout<<endl;
	
	reverse(ivec.begin(),ivec.end()); 
	for(vector<int>::iterator iter=ivec.begin();
	   iter!=ivec.end();++iter)
	   cout<<*iter<<" ";
	cout<<endl;
	
	reverse_copy(ivec.begin()+1,ivec.end()-1,
	  ostream_iterator<int>(cout," "));
	cout<<endl;
	
	reverse(ivec.begin(),ivec.end());
	for(vector<int>::iterator iter=ivec.begin();
	   iter!=ivec.end();++iter)
	   cout<<*iter<<" ";
	cout<<endl;
	
	//rotate(ivec.begin(),ivec.begin()+2,ivec.end());
	rotate(ivec.begin(),ivec.end()-2,ivec.end());
	rotate(ivec.begin(),find(ivec.begin(),ivec.end(),4),ivec.end());
	for(vector<int>::iterator iter=ivec.begin();
	   iter!=ivec.end();++iter)
	   cout<<*iter<<" ";
	cout<<endl;
	
	
	
	return 0;
}
