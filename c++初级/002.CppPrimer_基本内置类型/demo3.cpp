#include<iostream>

int main()
{
	int a;
	short b;
	long c;
	
	a=-12;
	
	unsigned int a2;
	unsigned short b2;
	unsigned long c2;
	
	char m;
	
	unsigned char m2;//8位二进制，2的8次方，0-255
	signed char m3;//-128,127
	
	m2=255;
	printf("%d\n",m2);//255
	m2=336;
	printf("%d\n",m2);//80
	
	m2=-1;
	printf("%d\n",m2);//255
	 
	return 0;
}
