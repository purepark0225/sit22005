# Problem04 (50 points, may have partial points)
During this semester we have learned the obejct oriented programming paradigm. 
Following code is the stack program that coded based on the procedural oriented programming paradigm. 
Your task is to transform the following procedural oriented program to object-oriented program. 

```C++ my_stack.h
#pragma once

#include <iostream>

typedef struct 
{
    int key;
    /* other data types */
  char ch;
} Element;

typedef struct 
{
    Element *stack;     /* for dynamically allocated array */
    int max_size;       /* maximum size */
    int top;            /* stack top */
} Stack;

// Creation
Stack* CreateStack(int max_stack_size);

// Transform
Stack* DuplicateStack(Stack* original);

// Report
bool IsFullStack(Stack *s);

bool IsEmptyStack(Stack *s);

// Operation on Stack
void Push(Stack *s, Element item);

Element Pop(Stack *s);

// Destruction
void DestroyStack(Stack *s);

// Utility
void PrintStack(Stack *s);
void PrintChStack(Stack *s);
```

```C++ my_stack.cpp
#include "my_stack.h"

// Creation
Stack* CreateStack(int max_stack_size)
{
    /* dynamically allocate data structure */
    Stack *s = new Stack; 
    /* dynamically allocate elements */
    s->stack = new Element[max_stack_size];
    s->max_size = max_stack_size;
    /* Initially top points to -1 */
    s->top = -1;
    return s;

}

// Transform
Stack* DuplicateStack(Stack* original)
{
    Stack *s = CreateStack(original->max_size); /* Create stack */
    s->max_size = original->max_size;
    s->top = original->top;
    for(int i = 0; i < s->top+1; i++)
         s->stack[i] = original->stack[i];                               /* Clone the elements */
    return s;

}

// Report
bool IsFullStack(Stack *s)
{
   if(s->top == s->max_size - 1) 
        return 1;
   else 
        return 0;

}

bool IsEmptyStack(Stack *s)
{
   if(s->top < 0) 
        return 1;
   else 
        return 0;
}

// Operation on Stack
void Push(Stack *s, Element item)
{
   if(IsFullStack(s)) 
     /* prints an error message */
      std::cout << "Stack Full" << std::endl;   
   else {
      s->stack[++s->top] = item;
   }
}

Element Pop(Stack *s)
{
   if(IsEmptyStack(s)) 
   {
    /* prints an error message */
      std::cout << "Stack Empty" << std::endl;
      return Element(); 
   }   
   else {
      return s->stack[s->top--];
   }

}

// Destruction
void DestroyStack(Stack *s)
{
     delete [] s->stack;
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

```
Please refer the skeleton of the program.  
```C++
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
    Element *stack;     /* for dynamically allocated array */
    int max_size;       /* maximum size */
    int top;            /* stack top */
};

// You should not modify the header file
```

You may refer the output result of the program using output program.
You may execute the program as follows. 
```
your_repository_path/Problem04# ./output
```

* Note that you should modify the problematic reigon only!
