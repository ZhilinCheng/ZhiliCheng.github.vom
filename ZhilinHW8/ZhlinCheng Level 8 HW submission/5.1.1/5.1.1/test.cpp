#include <boost\shared_ptr.hpp>
#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include "Array.cpp"
#include <iostream>
int main()
{
	typedef boost::shared_ptr<Shape> ShapePtr;
	typedef Array<ShapePtr> ShapeArray;
	const int size = 3;
	ShapePtr p_shape1(new Point(2, 3));
	ShapePtr p_shape2(new Line(Point(0, 0), Point(1, 1)));
	ShapePtr p_shape3(new Circle(Point(0,0), 1));
	{
		// Create an array with shared pointers for shapes.
		ShapeArray array_shape(size);
		// Fill the array with various shapes.
		array_shape[0] = p_shape1;
		array_shape[1] = p_shape2;
		array_shape[2] = p_shape3;
		cout << p_shape1.use_count() << endl;
		cout << p_shape2.use_count() << endl;
		cout << p_shape3.use_count() << endl;
	}
	cout << p_shape1.use_count() << endl;
	cout << p_shape2.use_count() << endl;
	cout << p_shape3.use_count() << endl;
	getchar();
}