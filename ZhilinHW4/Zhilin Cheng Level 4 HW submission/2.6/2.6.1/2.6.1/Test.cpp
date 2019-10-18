#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include "Array.hpp"
#include <iostream>
#include <string>
#include <Windows.h>
int main()
{
	//full namespace for Point class
	ZhilinCheng::CAD::Point p1(1, 2);
	ZhilinCheng::CAD::Point p2(3, 4);
	cout << p1 << p2 << endl;
	//using declaration for using a single class (Line).
	using ZhilinCheng::CAD::Line;
	cout << Line(p1, p2);
	// Using declaration for a complete namespace (Containers).
	using namespace ZhilinCheng::Containers;
	Array array1(2);
	array1[0] = ZhilinCheng::CAD::Point(2, 3);
	array1[1] = ZhilinCheng::CAD::Point(3, 3);
	cout << array1[0] << array1[1]<<endl;
	//using the Circle class by creating a shorter alias for the YourName::CAD namespace.
	namespace FCAD = ZhilinCheng::CAD;
	using FCAD::Circle;
	Circle circle(FCAD::Point(0, 0), 1);
	cout << circle;
}