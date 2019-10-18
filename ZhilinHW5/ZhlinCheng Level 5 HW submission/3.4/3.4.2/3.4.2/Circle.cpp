#define _USE_MATH_DEFINES
#include <cmath>
#include "Circle.hpp"
#include "Point.hpp"
#include <sstream>
		Circle::Circle():Shape()//constructor
		{
		}

		Circle::Circle(const Point& center, double r) : Shape()  
			// Constructor accepting center and radius
		{
			p_center = center;
			m_radius = r;
		}

		Circle::Circle(const Circle& circle) : Shape(circle)//copy constructor
		{
			p_center = circle.p_center;
			m_radius = circle.m_radius;
		}

		Circle::~Circle()//destructor
		{
		}
		// Accessing functions

		Point Circle::CentrePoint() const
		{
			return p_center;
		}

		double Circle::Radius() const
		{
			return m_radius;
		}
		// setter

		void Circle::CentrePoint(const Point& newCenter)
		{
			p_center = newCenter;
		}

		void Circle::Radius(double newR)
		{
			m_radius = newR;
		}
		// Functionality

		double Circle::Diameter() const
		{
			return 2.0 * m_radius;
		}

		double Circle::Area() const
		{
			return M_PI * pow(m_radius, 2);
		}

		double Circle::Circumference() const
		{
			return 2.0 * M_PI * m_radius;
		}

		string Circle::Tostring() const
		{
			stringstream stream;

			stream << "Center: " << p_center.Tostring() << endl << "Radius: " << m_radius;

			return stream.str();
		}

		Circle& Circle::operator = (const Circle& source)
		{ // Assignment operator

			if (this == &source)
			{
				return *this;
			}

			p_center = source.p_center;
			m_radius = source.m_radius;

			return *this;
		}

		ostream& operator << (ostream& os, const Circle& c)
			// Send to ostream
		{

			os << c.Tostring() << endl;

			return os;
		}
	
