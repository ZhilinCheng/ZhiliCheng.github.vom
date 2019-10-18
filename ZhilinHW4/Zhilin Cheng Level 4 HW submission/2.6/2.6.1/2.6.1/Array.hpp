#pragma once
 #ifndef Array_HPP
#define Array_HPP

#include "Point.hpp"
using namespace std;
namespace ZhilinCheng
{
	namespace Containers
	{

		class Array
		{
		private:
			CAD::Point* m_data;//Add a data member for a dynamic C array of Point objects
			int m_size;//Add a data member for the size of the array.

		public:
			// Constructor s
			Array();
			Array(int size);//Add a default constructor that allocates for example 10 elements.
			Array(const Array& pp);//Add a copy constructor
			~Array();//Add a destructor
			//Accessing functions
			int Size() const;
			CAD::Point& GetElement(int index) const;
			void SetElement(int index, const CAD::Point& newPoint);
			// Member operator overloading
			Array& operator = (const Array& source);
			CAD::Point& operator [] (int index);//can read and write
			const CAD::Point& operator [] (int index) const;//can read

		};
	}
}
#endif