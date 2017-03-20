//习题2.3
/*
如果在某机器上short类型占16位，那么可以赋给short
类型的最大数是什么？Unsigned short类型的最大数又是什么?
*/
//习题2.4
/*
当给16位的unsigned short对象赋值100000时，赋的值是什么?
*/ 
#include<iostream>
int main()
{
	short a;
	unsigned short b;
	std::cout<<"short类型是: "<<sizeof(a)*8<<std::endl;
	a=32767;
	std::cout<<"short最大数是: "<<a<<std::endl;
	a++;
	std::cout<<a<<std::endl;//-32768
	//short类型是: 16位
	
	std::cout<<"unsigned short类型是: "<<sizeof(b)*8<<std::endl;
	//unsigned short类型是: 16位
	b=65535;
	std::cout<<"ussigned short最大数是: "<<b<<std::endl;
	//ussigned short最大数是:65535
	b++;
	std::cout<<b<<std::endl;//0
	
	/*
	有符号数:
	最小数:-2^15 -32768
	最大数:2^15-1  32767
	*/

    std::cout<<"给unsigned short赋值100000："<<std::endl;
	b=100000;
	std::cout<<b<<std::endl;//100000%65536=34464 
	
	return 0;
}
/*
unsigned char        8位       2^8-1   255     0      0
signed char          8位       2^7-1   127    -2^7  -128 
unsigned short       16位      2^16-1  65536   0      0
signed short         16        2^15-1  32767   -2^15  -32768
unsigned int         32        2^32-1  4294967295  0   0
signed int           32        2^31-1  2147483647  -2^31   -2147483648
*/
