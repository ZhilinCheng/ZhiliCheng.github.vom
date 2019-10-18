#pragma once
#ifndef Line_HPP
#define Line_Hpp
#include "Point.hpp"
#include <iostream>
using namespace std;

class Line
{
private:
	Point p1;
	Point p2;
public:
	Line();
	Line(const Point&p1, const Point&p2);
	Line(const Line& line);

	~Line();
	Point P1() const;
	Point P2() const;
	void P1(const Point& P1value);
	void P2(const Point& P2value);
	string ToString() const;
	double Length() const;

};
#endif
