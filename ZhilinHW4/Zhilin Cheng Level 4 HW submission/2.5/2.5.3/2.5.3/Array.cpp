#include "Point.hpp"
#include "Array.hpp"
using namespace std;
Array::Array()//default constructor
{

}
Array::Array(int size) : m_data(new Point[size]), m_size(size)//Add a default constructor that allocates for example 10 elements.
{

}

Array::Array(const Array& pp)//Add a copy constructor
{
	m_data = new Point[pp.m_size];
	m_size = pp.m_size;
	for (int i = 1; i < m_size; i++)
	{
		m_data[i] = pp.m_data[i];
	}
}
	Array::~Array()//Add a destructor
	{
		delete[] m_data;
	}
	//Accessing functions
	int Array:: Size() const
	{
		return m_size;
	}
	Point& Array::GetElement(int index) const
	{
		if (index >= m_size)
		{
			return m_data[0];
		}
		return m_data[index];

	}
	void Array::SetElement(int index, const Point& newPoint)
	{
		if (index >= m_size)
		{
			return;
		}

		m_data[index] = newPoint;
	}
	Array& Array::operator = (const Array& source)//assignment
	{
		if (this == &source)
		{
			return *this;
		}

		delete[] m_data;
		m_data = new Point[source.m_size];
		m_size = source.m_size;
		for (int i = 0; i < m_size; i++)
		{
			m_data[i] = source.m_data[i];
		}

		return *this;
	}
	Point& Array::operator [] (int index) // can read and write
	{
		if (index > m_size)
		{
			return m_data[0];
		}
		return m_data[index];

	}
	const Point& Array::operator [] (int index) const//cannot read
	{
	 
		if (index >= m_size)
		{ 
			return m_data[0];
		}

		return m_data[index];
	}


	