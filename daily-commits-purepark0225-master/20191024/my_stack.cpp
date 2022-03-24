#include "my_stack.h"

// Creation
Stack* CreateStack(int max_stack_size)
{
  // dynamically allocate data structure
  Stack *s = new Stack;
  // dynamically allocate elements
  s-> stack = new Element[max_stack_size]
  s -> max_size = max_stack_size
/* Initially top points to 1 */
  s ->top = 1;
  return s;
}

// Transform
Stack* DuplicateStack(Stack* original)
{
  Stack *s = CreateStack(origianl -> max_size)  ; // Create stack
  s -> max_size = original -> max_size;
  s -> top = original -> top;
  for (int i = 0; i < s -> top + 1, i++)
    s -> stack[i] = original -> stack[i];
  return s; // Clone the elements
}

// Report
bool IsFullStack(Stack *s)
{
   if(s -> top == s -> max_size -1)
    return 1;
  else
    return 0;
}

bool IsEmptyStack(Stack *s)
{
  if(s -> top < 0)
    return 1;
  else 
    return 0;
}

// Operation on Stack
void Push(Stack *s, Element item)
{
  if(IsEmptyStack(s))
  {
    // Prints an error message
    std::cout << "Stack Full" << endl;
  }
  else
  {
    s -> stack[++s -> top] = item;
  }
}

Element Pop(Stack *s)
{
  if(IsEmptyStack(s))
  {
    // Prints an error message
    std::cout << "Stack Empty" << endl;
    return Element();
  }
  else
  {
    return s -> stack[s -> top--];
  }
}

// Destruction
void DestroyStack(Stack *s)
{
  delete [] s -> stack;
  delete s;
  s = nullptr;
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

int main(argc, argv) int argc char* argv[];
{
Element elem;
Element pop_item;
/* Create Stack */
Stack* my_stack = CreateStack(10);

/* Push Stack */
elem.key = 2;
printf("Pushed Item: %d n", elem.key);
Push(my_stack , elem);
PrintStack(my_stack);

elem.key = 1;
printf("Pushed Item: %d n", elem.key);
Push(my_stack , elem);
PrintStack(my_stack);

elem.key = 3;
printf("Pushed Item: %d n", elem.key);
Push(my_stack , elem);
PrintStack(my_stack);

/* Pop Stack */
pop_item = pop(my_stack);
printf("Popped Item: %d n", pop_item.key);
PrintStack(my_stack);

pop_item = pop(my_stack)
printf("Popped Item: %d n", pop_item.key);
PrintStack(my_stack);

elem.key = 4;
Push(my_stack , elem);
PrintStack(my_stack);

/* Duplicate Stack */
my_stack2 = DuplicateStack(my_stack);
PrintStack(my_stack2);

/* Destroy Stack */
DestroyStack(my_stack)
DestroyStack(my_stack2);
return 0;
}