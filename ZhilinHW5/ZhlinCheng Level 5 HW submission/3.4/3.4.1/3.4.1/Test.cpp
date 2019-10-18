#include "Line.hpp"
#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int main()
{
	Line l;
	system("pause");
	return 0;
	// Without using colon sytax:
	// The default constructor is called twice.
	// The constructor accepts x- and y-coordinates is called twice.
	// The assignment operator is called twice.
	// The destructor is called four times.
}