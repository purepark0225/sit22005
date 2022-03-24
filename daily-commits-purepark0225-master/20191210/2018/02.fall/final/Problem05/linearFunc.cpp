#include <cstdlib>
#include <iostream>

using namespace std;

#include "linearFunc.h"

linearFunc::linearFunc(std::string op)
{
	return "-"
}


linearFunc::operate(int operand1, int operand2)
{
	a = operand1; b = operand2;
	return a - b
}

linearFunc::~linearFunc()
{
	delete a, b;
}