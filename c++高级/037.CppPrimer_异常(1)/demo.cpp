/*�쳣
��ͳ�Ĵ�����
�ִ��Ĵ������� �����쳣
try
catch
throw
�쳣����
	����
	�ַ���
	�����
*/
#include<iostream>
using namespace std;

class BadSrcFile{};
class BadDestFile{};
class BadCopy{};


int my_cp(const char *src_file,const char *dest_file)
{
	FILE *in_file,*out_file;
	in_file=fopen(src_file,"rb");
	if(in_file==NULL)
	{
		return 1;
	}
	out_file=fopen(dest_file,"wb");
	if(out_file==NULL)
	{
		return 2;
	}
	char rec[256];
	size_t bytes_in,bytes_out;
	while((bytes_in=fread(rec,1,256,in_file))>0)
	{
		bytes_out=fwrite(rec,1,bytes_in,out_file);
		if(bytes_in!=bytes_out)
		{
			return 3;
		}
	}
	fclose(in_file);
	fclose(out_file);
	return 0;
}

void my_cp2(const char *src_file,const char *dest_file)
{
	FILE *in_file,*out_file;
	in_file=fopen(src_file,"rb");
	if(in_file==NULL)
	{
		//return 1;
		throw 1;
	}
	out_file=fopen(dest_file,"wb");
	if(out_file==NULL)
	{
		//return 2;
		throw 2;
	}
	char rec[256];
	size_t bytes_in,bytes_out;
	while((bytes_in=fread(rec,1,256,in_file))>0)
	{
		bytes_out=fwrite(rec,1,bytes_in,out_file);
		if(bytes_in!=bytes_out)
		{
			//return 3;
			throw 3;
		}
	}
	fclose(in_file);
	fclose(out_file);
	
}

void my_cp3(const char *src_file,const char *dest_file)
{
	FILE *in_file,*out_file;
	in_file=fopen(src_file,"rb");
	if(in_file==NULL)
	{
		//return 1;
		//throw 1;
		throw "��Դ�ļ�ʱ����!";
	}
	out_file=fopen(dest_file,"wb");
	if(out_file==NULL)
	{
		//return 2;
		//throw 2;
		throw "��Ŀ���ļ�ʱ����!";
	}
	char rec[256];
	size_t bytes_in,bytes_out;
	while((bytes_in=fread(rec,1,256,in_file))>0)
	{
		bytes_out=fwrite(rec,1,bytes_in,out_file);
		if(bytes_in!=bytes_out)
		{
			//return 3;
			//throw 3;
			throw "�����ļ�����!";
		}
	}
	fclose(in_file);
	fclose(out_file);
}

void my_cp4(const char *src_file,const char *dest_file)
{
	FILE *in_file,*out_file;
	in_file=fopen(src_file,"rb");
	if(in_file==NULL)
	{
		//return 1;
		//throw 1;
		//throw "��Դ�ļ�ʱ����!";
		throw BadSrcFile();
	}
	out_file=fopen(dest_file,"wb");
	if(out_file==NULL)
	{
		//return 2;
		//throw 2;
		//throw "��Ŀ���ļ�ʱ����!";
		throw BadDestFile();
	}
	char rec[256];
	size_t bytes_in,bytes_out;
	while((bytes_in=fread(rec,1,256,in_file))>0)
	{
		bytes_out=fwrite(rec,1,bytes_in,out_file);
		if(bytes_in!=bytes_out)
		{
			//return 3;
			//throw 3;
			//throw "�����ļ�����!";
			throw BadCopy();
		}
	}
	fclose(in_file);
	fclose(out_file);
}

int main()
{
	int result;
	if((result=my_cp("1.txt","2.txt"))!=0)
	{
		switch(result)
		{
			case 1:
				printf("��Դ�ļ�ʱ����!\n");
				break;
			case 2:
				printf("��Ŀ���ļ�ʱ����!\n");
				break;
			case 3:
				printf("�����ļ�ʱ����!\n");
				break;
			default:
				printf("����δ֪����!\n");
				break; 
		}
	}
	
	try
	{
		my_cp2("1.txt","2.txt");
		my_cp3("1.txt","2.txt");
		my_cp4("11.tex","2.txt");
	}
	catch(int e)
	{
		printf("�����쳣��%d\n",e);	
	}
	catch(const char *e)
	{
		printf("%s\n",e);	
	}	
	catch(BadSrcFile e)
	{
		printf("�����쳣����Դ�ļ�ʱ����!\n");
	}
	catch(BadDestFile e)
	{
		printf("�����쳣����Ŀ���ļ�����!\n");
	}
	catch(BadCopy e)
	{
		printf("�����쳣��Copyʱ����!\n");
	}
	catch(...)
	{
		printf("������δ֪�쳣!\n");
	}
	printf("OK\n");
	return 0;
}
