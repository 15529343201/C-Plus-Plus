/*异常
传统的处理方法
现代的处理方法： 处理异常
try
catch
throw
异常类型
	数字
	字符串
	类对象
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
		throw "打开源文件时出错!";
	}
	out_file=fopen(dest_file,"wb");
	if(out_file==NULL)
	{
		//return 2;
		//throw 2;
		throw "打开目标文件时出错!";
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
			throw "拷贝文件出错!";
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
		//throw "打开源文件时出错!";
		throw BadSrcFile();
	}
	out_file=fopen(dest_file,"wb");
	if(out_file==NULL)
	{
		//return 2;
		//throw 2;
		//throw "打开目标文件时出错!";
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
			//throw "拷贝文件出错!";
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
				printf("打开源文件时出错!\n");
				break;
			case 2:
				printf("打开目标文件时出错!\n");
				break;
			case 3:
				printf("拷贝文件时出错!\n");
				break;
			default:
				printf("发生未知错误!\n");
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
		printf("发生异常：%d\n",e);	
	}
	catch(const char *e)
	{
		printf("%s\n",e);	
	}	
	catch(BadSrcFile e)
	{
		printf("发生异常：打开源文件时出错!\n");
	}
	catch(BadDestFile e)
	{
		printf("发生异常：打开目标文件出错!\n");
	}
	catch(BadCopy e)
	{
		printf("发生异常：Copy时出错!\n");
	}
	catch(...)
	{
		printf("发生了未知异常!\n");
	}
	printf("OK\n");
	return 0;
}
