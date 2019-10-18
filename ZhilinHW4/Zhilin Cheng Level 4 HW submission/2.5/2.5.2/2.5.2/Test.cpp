#include "Point.hpp"
#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
int main()
{
	int size = 3;
	// Create an array of Point pointers with 3 elements on the heap.
	Point** array_pp = new Point*[size];
	array_pp[0] = new Point(1, 2);
	array_pp[1] = new Point(3, 4);
	array_pp[2] = new Point(5, 6);
	//Create for each element in the array a point on the heap.

	for (int i = 0; i < 3; i++)
	{
		cout << *array_pp[i] << endl;
	}
	// Delete each point in the array.
	for (int i = 0; i < 3; i++)
	{
		delete array_pp[i];
	}
	// Delete the array itself.
	delete[] array_pp;
	system("pause");
}