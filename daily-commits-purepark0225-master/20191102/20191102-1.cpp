#include <iostream>

// Data Representation
typedef struct 
{
	int key;
	 //other data types
}Element;

// Data Structure Representation
typedef struct 
{
	Element *stack;	// for dynamically allocated array
	int max_size;	// maximum size
	int top;		// stack top
}Stack;

//Creation
Stack* CreateStack(int max_stack_size)
{
	// dynamically allocate data structure
	Stack *s = (Stack*)malloc(sizeof(Stack));
	//dynamically allocate elements
	s->stack = (Element*)malloc(max_stack_size * sizeof(Element));
	s->max_size = max_stack_size;
	// Initially top points to -1
	s->top = -1;
	return s;
}

// Transformation
Stack* DuplicateStack(Stack* original)
{
	Stack *s = CreateStack(original->max_size);	//Create Stack
	s->max_size = original->max_size;
	s->top = original->top;
	for(int i = 0; i < s->top+1; i++)
		s -> stack[i] = original -> stack[i];
	return s;	// clone the elements
}


// Report
int isFullStack(Stack *s)
{
	if(s -> top == s -> max_size -1)
		return 1;
	else
		return 0;
}

int isEmptyStack(Stack *s)
{
	if(s->top < 0)
		return 1;
	else 
		return 0;
}

// Operation
void Push(Stack *s, Element item)
{
	if(isFullStack(s))
		// Prints an error message
		printf("Stack Full\n");
	else{
		s->stack[++s->top] = item;
	}
}

Element Pop(Stack *s)
{
	if(isEmptyStack(s))
		// prints an error message
		printf("Stack Empty\n");
	else{
		return s->stack[s->top--];
	}
}

// Destructuin
void DestroyStack(Stack *s)
{
	free(s->stack);
	free(s);
	s = NULL;
}

void PrintStack(Stack *s)
{
	int i = 0;
	printf("---------------------\n");
	for(i = 0; i < s -> top + 1; i++)
	{
		printf("%d|", s->stack[i].key);
	}
	printf("\n----------------------------\n");
}

int main(int argc, char* argv[]) 
{
	Element elem;
	Element pop_item;
	// Create Stack
	Stack* my_stack = CreateStack(10);
	Stack* my_stack2 = CreateStack(10);
	// Push Stack
	elem.key = 2;
	printf("Pushed Item: %d\n", elem.key);
	Push(my_stack, elem);
	PrintStack(my_stack);

	elem.key = 1;
	printf("Pushed Item: %d\n", elem.key);
	Push(my_stack, elem);
	PrintStack(my_stack);

	elem.key = 3;
	printf("Pushed Item: %d\n", elem.key);
	Push(my_stack, elem);
	PrintStack(my_stack);

	// Pop Stack
	pop_item = Pop(my_stack);
	printf("Popped Item: %d\n", pop_item.key);
	PrintStack(my_stack);

	pop_item = Pop(my_stack);
	printf("Popped Item: %d\n", pop_item.key);
	PrintStack(my_stack);	

	elem.key = 4;
	printf("Pushed Item: %d\n", elem.key);
	Push(my_stack, elem);
	PrintStack(my_stack);

	// Duplicate Stack
	my_stack2 = DuplicateStack(my_stack);
	PrintStack(my_stack2);

	// Destroy Stack
	DestroyStack(my_stack);
	DestroyStack(my_stack2);
	return 0;
}