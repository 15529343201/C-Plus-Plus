#include<iostream>

int main()
{
	int sum=0,value;
	
	//��������ʱ�ͼ���ѭ�� 
	while(std::cin>>value)//ctrl+z����ѭ�� 
	{
		sum+=value;
	}
	std::cout<<"Sum is: "<<sum<<std::endl;
	return 0;
}
