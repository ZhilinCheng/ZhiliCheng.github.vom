#ifndef NumericArray_HPP
#define NumericArray_HPP

#include "Array.hpp"

template <typename T>
class NumericArray : public Array<T>
{
public:
	// Constructors
	NumericArray();
	NumericArray(int size);
	NumericArray(const NumericArray<T>& pn);

	// Destructor
	~NumericArray();

	// Member operator overloading
	NumericArray<T>& operator = (const NumericArray<T>& source);
	NumericArray<T> operator * (const T& factor) const;
	NumericArray<T> operator + (const NumericArray<T>& n2) const;

	// Numeric functionality
	T DotProduct(const NumericArray<T>& n2) const;
};

#endif
