#include <cstdlib>
#include <iostream>

using namespace std;

#include "minus.h"

Minus::Minus(std::string op)
{
	return "-"
}


Minus::operate(int operand1, int operand2)
{
	a = operand1; b = operand2;
	return a - b
}

Minus::~Minus()
{
	delete a, b;
}