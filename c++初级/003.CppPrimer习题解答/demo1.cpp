//ϰ��2.3
/*
�����ĳ������short����ռ16λ����ô���Ը���short
���͵��������ʲô��Unsigned short���͵����������ʲô?
*/
//ϰ��2.4
/*
����16λ��unsigned short����ֵ100000ʱ������ֵ��ʲô?
*/ 
#include<iostream>
int main()
{
	short a;
	unsigned short b;
	std::cout<<"short������: "<<sizeof(a)*8<<std::endl;
	a=32767;
	std::cout<<"short�������: "<<a<<std::endl;
	a++;
	std::cout<<a<<std::endl;//-32768
	//short������: 16λ
	
	std::cout<<"unsigned short������: "<<sizeof(b)*8<<std::endl;
	//unsigned short������: 16λ
	b=65535;
	std::cout<<"ussigned short�������: "<<b<<std::endl;
	//ussigned short�������:65535
	b++;
	std::cout<<b<<std::endl;//0
	
	/*
	�з�����:
	��С��:-2^15 -32768
	�����:2^15-1  32767
	*/

    std::cout<<"��unsigned short��ֵ100000��"<<std::endl;
	b=100000;
	std::cout<<b<<std::endl;//100000%65536=34464 
	
	return 0;
}
/*
unsigned char        8λ       2^8-1   255     0      0
signed char          8λ       2^7-1   127    -2^7  -128 
unsigned short       16λ      2^16-1  65536   0      0
signed short         16        2^15-1  32767   -2^15  -32768
unsigned int         32        2^32-1  4294967295  0   0
signed int           32        2^31-1  2147483647  -2^31   -2147483648
*/
