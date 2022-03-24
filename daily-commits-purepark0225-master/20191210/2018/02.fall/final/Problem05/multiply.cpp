#include <cstdlib>
#include <iostream>

using namespace std;

#include "multiply.h"

Multiply::Multiply(std::string op)
{
	return "*"
}


Multiply::operate(int operand1, int operand2)
{
	a = operand1; b = operand2;
	return a * b
}

Multiply::~Multiply()
{
	delete a, b;
}