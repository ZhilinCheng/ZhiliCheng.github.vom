#include "Point.hpp"
#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int main()
{
	Point* p1 = new Point();// create Point objects on the heap with new using the default constructor
	Point* p2 = new Point(1, 1);// create Point objects on the heap with new using the constructor with coordinates 
	Point* p3 = new Point(*p2);//assign it to pointer (Point*) variables.
	cout << *p1 << *p2 << *p3;//dereference the pointer 
 	delete p1;
	delete p2;
	delete p3;
	cout << "The distance between " << *p3 << " and " << *p1<< " is " << (*p3).Distance(*p1) << endl;
	cout << "Please input the size of the pointer array." << endl;
	int size;
	cin >> size;
	//Point pa[size]; size must have a constant value
	Point* pa = new Point[size]; // Cannot use other constructor.
	delete[] pa;
	system("pause");
}