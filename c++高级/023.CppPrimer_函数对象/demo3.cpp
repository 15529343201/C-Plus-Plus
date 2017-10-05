/*二元谓词*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

template<typename elementType>
class CMultiply//乘法 
{
	public:
		elementType operator() (const elementType& elem1,const elementType& elem2)
		{
			return elem1*elem2;
		}
};

int main()
{
	vector<int> a,b;
	
	for(int i=0;i<10;i++)
		a.push_back(i);
	
	for(int j=100;j<110;++j)
		b.push_back(j);
		
	vector<int> vecResult;
	vecResult.resize(10);
	
	transform(a.begin(),a.end(),b.begin(),vecResult.begin(),CMultiply<int>());
	for(size_t nIndex=0;nIndex<vecResult.size();++nIndex)
		cout<<vecResult[nIndex]<<" ";
	
	return 0;	
} 
/*输出结果
0 101 204 309 416 525 636 749 864 981
*/ 
