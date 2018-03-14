#include "MyLib.h"

#include <stdexcept>

using namespace std;

namespace MyLib
{
	double MyLibFuncs::Add(double a, double b)
	{
		return a + b;
	}

	double MyLibFuncs::Subtract(double a, double b)
	{
		return a - b;
	}

	double MyLibFuncs::Multiply(double a, double b)
	{
		return a * b;
	}

	double MyLibFuncs::Divide(double a, double b)
	{
		return a / b;
	}
}