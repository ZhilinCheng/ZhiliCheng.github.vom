#ifndef Line_HPP
#define Line_HPP
#include "Point.hpp"
#include "Shape.hpp"

#include <iostream>
using namespace std;
class Line : public Shape

{
private:
	Point p1; // Start point
	Point p2; // End point

public:
	// Constructors
	Line();
	Line(const Point& p1, const Point& p2);
	Line(const Line& line);
	virtual~Line();

	// Accessing functions
	Point P1() const;
	Point P2() const;

	// Modifiers
	void P1(const Point& newP1);
	void P2(const Point& newP2);

	double Length() const;
	string Tostring() const;

	// Member operator overloading
	Line& operator = (const Line& source); // Assignment operator
	friend ostream& operator << (ostream& os, const Line& l); // Send to ostream

};
#endif
