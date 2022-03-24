#include "my_stack.h"

// Creation
Stack* CreateStack(int max_stack_size)
{
    
}

// Transform
Stack* DuplicateStack(Stack* original)
{
    
}

// Report
bool IsFullStack(Stack *s)
{
   
}

bool IsEmptyStack(Stack *s)
{

}

// Operation on Stack
void Push(Stack *s, Element item)
{

}

Element Pop(Stack *s)
{

}

// Destruction
void DestroyStack(Stack *s)
{

}

// Utility
void PrintStack(Stack *s)
{
  std::cout << "----------------------------\n|";
  for(int i = 0; i < s->top+1; i++)
  {
    std::cout << s->stack[i].key << "|";
  }
  std::cout << "\n----------------------------" << std::endl;
}

void PrintChStack(Stack *s)
{
  std::cout << "----------------------------\n|";
  for(int i = 0; i < s->top+1; i++)
  {
    std::cout << s->stack[i].ch << " ";
  }
  std::cout << "\n----------------------------" << std::endl;
}