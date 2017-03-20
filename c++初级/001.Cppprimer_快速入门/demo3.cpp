#include<iostream>

int main()
{
	std::cout<<"Enter two numbers: "<<std::endl;
	int v1,v2;
	std::cin>>v1>>v2;
	
	int lower,upper;
	if(v1<=v2)
	{
		lower=v1;
		upper=v2;
	}
	else
	{
		lower=v2;
		upper=v1;
	}
	std::cout<<"两个数中比较小的是:"<<lower<<std::endl;
	std::cout<<"两个数中比较大的是:"<<upper<<std::endl;
    return 0;
}
