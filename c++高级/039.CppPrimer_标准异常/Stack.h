#ifndef STACK_H
#define STACK_H
#include<exception>
#include<deque>

template<class T>
class Stack
{
	protected:
		std::deque<T> c;
	public:
		class ReadEmptyStack:public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return "read empty stack ¶ÑÕ»ÊÇ¿ÕµÄ";
				}
		};
		bool empty() const
		{
			return c.empty();
		}
		void push(const T& elem)
		{
			c.push_back(elem);
		}
		T pop()
		{
			if(c.empty())
			{
				throw ReadEmptyStack();
			}
			T elem(c.back());
			c.pop_back();
			return elem;
		}
		T& top()
		{
			if(c.empty())
			{
				throw ReadEmptyStack();
			}
			return c.back();
		}
};






#endif
