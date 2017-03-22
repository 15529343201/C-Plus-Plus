#ifndef _MYUTIL_H
#define _MYUTIL_H
#include<algorithm>

template<class T>
void ChangeSize1D(T* &a,const int oldSize,const int newSize);

//using namespace std;
template<class T>
//放大数组 
void ChangeSize1D(T* &a,const int oldSize,const int newSize)
{
	if(newSize<0) 
	  throw "New length must be >= 0";
	  
	T* temp=new T[newSize];
	int number=std::min(oldSize,newSize);
	std::copy(a,a+number,temp);
	delete[] a;
	a=temp;
} 

#endif
