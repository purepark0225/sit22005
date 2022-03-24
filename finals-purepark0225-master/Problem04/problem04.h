#pragma once

// You should not modify the header file
class Element
{
public:
	Element():m_key(-1), m_ch('\0')
	{
		object_cnt++;
	}
	Element(int key, char c)
	:m_key(key), m_ch(c)
	{
		object_cnt++;
	}
	~Element()
	{
		object_cnt--;
	}

private:
	int m_key;
	char m_ch;

public:
	int get_key(){return m_key;}
	char get_ch(){return m_ch;}

	static int object_cnt;
};

class Stack
{
public:
	Stack(int max_stack_size);

	~Stack();

	Stack(const Stack& rhs);

	Stack& operator=(const Stack& rhs);

	bool IsFullStack();

	bool IsEmptyStack();

	// Operation on Stack
	void Push(Element item);

	Element Pop();

	// Utility
	void PrintStack();

	void PrintChStack();

private:
	Element *stack;		/* for dynamically allocated array */
   	int max_size;		/* maximum size */
	int top;			/* stack top */
};

// You should not modify the header file