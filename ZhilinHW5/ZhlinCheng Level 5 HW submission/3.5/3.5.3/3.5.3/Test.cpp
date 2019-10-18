#include "Shape.hpp"
#include "Point.hpp"
#include "Line.hpp"
#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
int main()
{
	Shape* shapes[3];
	shapes[0] = new Shape;
	shapes[1] = new Point;
	shapes[2] = new Line;
	for (int i = 0; i != 3; i++) delete shapes[i];
	system("pause");
	return 0;
}