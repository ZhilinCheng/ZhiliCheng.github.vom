#include "Point.hpp"
#include <sstream>
#include <iostream>
#include <cmath>
using namespace std;
		Point::Point() : Shape() //constructor
		{
		}

		Point::Point(const Point& point) :  Shape(point)
		{
			m_x = point.m_x;
			m_y = point.m_y;
		}

		Point::Point(double xValue, double yValue) :Shape() 
		{
			m_x = xValue;
			m_y = yValue;
		}

		Point::~Point() //destructor
		{
		}
		double Point::X() const //getter
		{
			return m_x;
		}

		double Point::Y() const//getter
		{
			return m_y;
		}

		void Point::X(double newX)//setter
		{
			m_x = newX;
		}

		void Point::Y(double newY)//setter
		{
			m_y = newY;
		}

		string Point::Tostring() const
		{
			stringstream stream;

			stream << "Point(" << m_x << "," << m_y << ")";

			return stream.str();
		}
		double Point::Distance() const
		{
			return sqrt(pow(m_x, 2) + pow(m_y, 2));
		}

		double Point::Distance(const Point& p) const
		{
			return sqrt(pow(m_x - p.m_x, 2) + pow(m_y - p.m_y, 2));
		}
		 
		Point& Point::operator = (const Point& source)
			// Assignment operator.
		{

			if (this == &source)
			{
				return *this;
			}

			m_x = source.m_x;
			m_y = source.m_y;

			return *this;
		}
 			 

		ostream& operator << (ostream& os, const Point& p)
		{
			// Send to ostream
			os << p.Tostring() << endl;

			return os;
		}
