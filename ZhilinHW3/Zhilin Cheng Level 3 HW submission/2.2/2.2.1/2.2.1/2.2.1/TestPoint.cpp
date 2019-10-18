#include "Point.hpp"
#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;
int main()
{
	double X, Y;
	cout << " input X and Y " << endl ;
	cin >> X >> Y;
	Point point;
	point.SetX(X);
	point.SetY(Y);
	cout << point.ToString() << endl;
	cout << point.GetX() << point.GetY() << endl;
	system("pause");
 }