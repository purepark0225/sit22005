#include <cstdlib>
#include <iostream>

using namespace std;

#include "plus.h"

Plus::Plus(std::string op)
{
	return "-"
}


Plus::operate(int operand1, int operand2)
{
	a = operand1; b = operand2;
	return a + b
}

Plus::~Plus()
{
	delete a, b;
}