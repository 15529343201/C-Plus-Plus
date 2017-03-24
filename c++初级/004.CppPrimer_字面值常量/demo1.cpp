#include<iostream>

int main()
{
	//浮点字面值默认类型是double
	std::cout<<3.14159<<std::endl;
	std::cout<<3.14159f<<std::endl;
	std::cout<<3.14159L<<std::endl;
	
	//科学计数法
	std::cout<<3.14159E2<<std::endl;//315.159
	std::cout<<3.14159e-3f<<std::endl;//0.00314159
	return 0;
}
