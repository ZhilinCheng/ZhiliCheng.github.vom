#include "Circle.hpp"
#include "Point.hpp"
#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
int main()
{
	double x, y;
	double r;
	cin >> x >> y;
	cin >> r;
	Point center(x, y);
	Circle circle(center, r);
	cout << circle.Tostring() << endl;
	cout << "Diameter " << circle.Diameter() << endl;
	cout << "Area " << circle.Area() << endl;
	cout << "Circumference" << circle.Circumference() << endl;
	system("pause");
	return 0;
}