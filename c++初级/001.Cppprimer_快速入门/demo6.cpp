#include<iostream>

int main()
{
	int sum=0,value;
	
	//当有输入时就继续循环 
	while(std::cin>>value)//ctrl+z跳出循环 
	{
		sum+=value;
	}
	std::cout<<"Sum is: "<<sum<<std::endl;
	return 0;
}
