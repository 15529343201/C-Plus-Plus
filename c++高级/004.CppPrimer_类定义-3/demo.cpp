/*�ඨ��(3)
������ -> ǰ������
�ඨ��
�����
�ݱ䣺c -> c++
*/
#include<iostream>
#include<string>
using namespace std;

class Screen;//������ 

class LinkScreen
{
	Screen *window;
	LinkScreen *next;
	LinkScreen *prev;
};

class Y;
class X
{
	private:
		Y *ptr;	
};
class Y
{
	private:
		X *ptr;
		X obj;
};

//��¼
class Record  //����һ���������ࣺ�ඨ�壬������ 
{
	typedef size_t size;
	private:
		size byte_count;
		string name;//��¼����
	public:
		Record():byte_count(0)
		{
			
		}
		Record(size s):byte_count(s)
		{
			
		}
		Record(string s):name(s),byte_count(0)
		{
			
		}
		size get_count() const
		{
			return byte_count;
		}
		string get_name() const
		{
			return name;
		} 
}; 

int main()
{
	Screen *scr;
	Record r;//�ڶ�ջ�ϴ�����Ķ���
	Record *p = new Record;//�ڶ��϶�̬�ش�������
	delete p; 
	
	cout<<"hello"<<endl;
	return 0;
} 
