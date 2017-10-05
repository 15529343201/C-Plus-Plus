#ifndef POINTER_H
#define POINTER_H
class String;

//����ָ�룺��ָ��ʹ�ý��м��� 
class Pointer
{
	private:
		String *ptr;
		static String errorMessage;
	public:
		Pointer();
		Pointer(String const &n);
		~Pointer();
		
		String &operator*();
		String *operator->() const;
};

#endif
