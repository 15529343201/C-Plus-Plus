#include<iostream>
#include<stdexcept>
using namespace std;

class Student
{
	public:
		Student(int age)
		{
			if(age<0||age>150)
				throw out_of_range("���䲻��С��0�����150");
			this->m_age=age; 
		}
	private:
		int m_age;
};

int main()
{
	try
	{
		Student zhangfei(200);
		cout<<"ѧ��û��"<<endl;
	}
	catch(out_of_range err)
	{
		cout<<"ѧ������"<<err.what()<<endl;
	}
	return 0;
}
/*
ѧ���������䲻��С��0�����150
*/
