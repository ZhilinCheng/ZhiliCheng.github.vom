#include "Point.hpp"
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
int main()
{
	double X1, Y1;
	double X2, Y2;
	cout << " input X and Y " << endl;
	cin >> X1 >> Y1;
	Point point1(X1, Y1);
	cout << point1.ToString() << endl;
	cout << point1.X() << " " << point1.Y() << endl;
	cin >> X2 >> Y2;
	Point point2(X2, Y2);
	cout << point2.ToString() << endl;
	cout << point2.X() << point2.Y() << endl;
	cout << "The distance between origin and " << point1.ToString() << " is "
		<< point1.Distance() << "." << endl;
 	cout << "the distance between " << point1.ToString() << "and" << point2.ToString() << "is" << point1.Distance(point2) << "." << endl;
	const Point cp(1.5, 3.9);
	//cp.X(0.3); this runs the error
	cout << cp.X() << endl;
	system("pause");
	return 0;
}