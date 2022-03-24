#include "problem04.h"
#include <iostream>

int Element::object_cnt = 0;

Stack::Stack(int max_stack_size)
{ 
	stack = new Element[max_stack_size];
}

Stack::~Stack()
{
	delete [] stack;
}

Stack::Stack(const Stack& rhs)
{
	stack = new Element[rhs.max_size];
}

Stack& Stack::operator=(const Stack& rhs)
{
	stack = new Element[rhs.max_size];
}


bool Stack::IsFullStack()
{
	bool ret = false;
	if (Element::object_cnt == max_size){
		ret = true;
	}
	return ret;
}

bool Stack::IsEmptyStack()
{
	bool ret = false;
	if (Element::object_cnt == 0){
		ret = true;
	}
	return ret;
}

void Stack::Push(Element item)
{
	if(Stack::IsFullStack())
		std::cout << "Stack Full" << std::endl;
	else{
		stack[top++] = item;
	}

}

Element Stack::Pop()
{
	if(Stack::IsEmptyStack())
	{
		std::cout << "Stack Empty";
		return Element();
	}
	// std::cout << "the deleted item is:" << stack[top--];
}



void Stack::PrintStack()
{
  std::cout << "----------------------------\n|";
  for(int i = 0; i < top+1; i++)
  {
    std::cout << "" << "|";
  }
  std::cout << "\n----------------------------" << std::endl;
}

void Stack::PrintChStack()
{
  std::cout << "----------------------------\n|";
  for(int i = 0; i < top+1; i++)
  {
    std::cout << "" << " ";
  }
  std::cout << "\n----------------------------" << std::endl;
}