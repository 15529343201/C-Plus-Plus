#include<iostream>
#include<locale.h>
#include<wchar.h>
#include<stdlib.h>

int main()
{
	char x='a';
	setlocale(LC_ALL,"chs");
	//宽字符
	wchar_t y = L"中";
	
	//不能是宽字符
	printf("%c\n",'A');
	
	wprintf(L"%lc\n",L"中");
	return 0; 
}
