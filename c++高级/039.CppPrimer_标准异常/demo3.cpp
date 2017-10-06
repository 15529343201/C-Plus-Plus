#include<iostream>
#include<stdexcept>
using namespace std;

class Student
{
	public:
		Student(int age)
		{
			if(age<0||age>150)
				throw out_of_range("年龄不能小于0或大于150");
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
		cout<<"学生没错"<<endl;
	}
	catch(out_of_range err)
	{
		cout<<"学生出错："<<err.what()<<endl;
	}
	return 0;
}
/*
学生出错：年龄不能小于0或大于150
*/
