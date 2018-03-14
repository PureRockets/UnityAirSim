// MyLibExec.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>

#include "MyLib.h"

using namespace std;

int main()
{
	double a = 7.4;
	int b = 99;

	cout << "a + b = " <<
		MyLib::MyLibFuncs::Add(a, b) << endl;

	cout << "a - b = " <<
		MyLib::MyLibFuncs::Subtract(a, b) << endl;
	cout << "a * b = " <<
		MyLib::MyLibFuncs::Multiply(a, b) << endl;
	cout << "a / b = " <<
		MyLib::MyLibFuncs::Divide(a, b) << endl;

	return 0;
  
}

