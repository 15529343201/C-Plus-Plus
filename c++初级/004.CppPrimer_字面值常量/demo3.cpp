#include<iostream>
#include<locale.h>
#include<wchar.h>
#include<stdlib.h>

int main()
{
	char x='a';
	setlocale(LC_ALL,"chs");
	//���ַ�
	wchar_t y = L"��";
	
	//�����ǿ��ַ�
	printf("%c\n",'A');
	
	wprintf(L"%lc\n",L"��");
	return 0; 
}
