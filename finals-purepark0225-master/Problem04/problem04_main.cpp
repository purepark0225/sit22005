#include <iostream>

#include "problem04.h"
#include <random>
#include <cstring>

// You should not modify the main function
int main()
{
	char buf[100];
	Stack s(100);

	std::cout << "Enter expression:";
	std::cin.getline(buf, 100);

	for(unsigned int i = 0; i < strlen(buf);i++)
	{
		if(buf[i] == '(' || buf[i] == ')')
		{
			if(buf[i] == '(')
			{
				Element e(0, buf[i]);
				s.Push(e);
			}	
			else if(buf[i] == ')')
			{
				if(s.IsEmptyStack())
				{
					std::cout << "unpaired" << std::endl;
					exit(0);
				}
				s.Pop();
			}
		}
	}

	if(s.IsEmptyStack())
		std::cout << "paired" << std::endl;
	else
		std::cout << "unpaired" << std::endl;

	return 0;
}

// You should not modify the main function