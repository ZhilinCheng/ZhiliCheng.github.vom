#include "Point.hpp"
#include "Array.hpp"
#include <iostream>
#include <string>
#include <windows.h>

using namespace std;
int main()
{
	// Use default constructor.
	Array array1;

	// Use constructor with size as argument.
	Array array2(2);
	// Using copy constructor.
	Array array3(array2);
	cout << "Size: " << array3.Size() << endl << "Elements: " << array3[0] << ", " << array3[1] << endl;
	// Test [] operator for writing.
	array2[0] = Point(0, 1);
	array2[1] = Point(2, 3);
	cout << "Size: " << array3.Size() << endl << "Elements: " << array3[0] << ", " << array3[1] << endl;
	// Test GetElement().
	cout << "Size: " << array2.Size() << endl << "Elements: " << array2.GetElement(0) << ", " << array2.GetElement(1) << endl;
	// Test SetElement().
	array2.SetElement(0, Point(2, 3));
	array2.SetElement(1, Point(4, 5));
	cout << "Size: " << array2.Size() << endl << "Elements: " << array2[0] << ", " << array2[1] << endl;
	// Test assignment operator.
	array1 = array2;
	for (int i = 0; i < array1.Size(); i++)
	{
		cout << array1[i] << endl;
	}


	system("pause");

}