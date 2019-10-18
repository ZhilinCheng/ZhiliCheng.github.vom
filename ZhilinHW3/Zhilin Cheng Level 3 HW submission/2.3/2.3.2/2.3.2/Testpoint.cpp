#include "Point.hpp"
#include <iostream>
#include <string>
using namespace std;
int main()

	{
		double X1, Y1;
		double X2, Y2;
		cout << " input X and Y " << endl;
		cin >> X1 >> Y1;
		Point point1(X1, Y1);
		cout << point1.Tostring() << endl;
		cout << point1.GetX() << point1.GetY() << endl;
		cin >> X2 >> Y2;
		Point point2(X2, Y2);
		cout << point2.Tostring() << endl;
		cout << point2.GetX() << point2.GetY() << endl;
		cout << "The distance between origin and " << point1.Tostring() << " is "
			<< point1.DistanceOrigin() << "." << endl;
		// Print the distance between the first point and the second point.
		cout << "the distance between " << point1.Tostring() << "and" << point2.Tostring() << "is" << point1.Distance(point2) << "." << endl;
		system("pause");

}