#include "Line.hpp"
#include "Point.hpp"
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main()
{
	double x1, y1;
	double x2, y2;
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	const Point p1(x1, y1);//start point
	const Point p2(x2, y2);//end point
	Line line(p1, p2);
	cout << line.ToString() << ", " << "the length is " << line.Length() <<  endl;
	system("pause");
	return 0;
}

