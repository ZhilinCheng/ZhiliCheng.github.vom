#ifndef NumericArray_CPP
#define NumericArray_CPP

#include "NumericArray.hpp"
#include "differencesizeexception.hpp"

// Constructors
template <typename T>
NumericArray<T>::NumericArray() 
{ 
	// Default constructor.
}

template <typename T>
NumericArray<T>::NumericArray(int size)
{
}

template <typename T>
NumericArray<T>::NumericArray(const NumericArray<T>& pn) 
{ 
	// Copy constructor.
}

template <typename T>
NumericArray<T>::~NumericArray()
{
	// Destructor
}

// Member operator overloading
template <typename T>
NumericArray<T>& NumericArray<T>::operator = (const NumericArray<T>& source)
{ // Assignment operator

	// Exit if same object
	if (this == &source)
	{
		return *this;
	}

	// Call base class assignment
	Array<T>::operator = (source);

	return *this;
}

template <typename T>
NumericArray<T> NumericArray<T>::operator * (const T& factor) const
{
	NumericArray<T> result(*this);

	for (int i = 0; i < result.Size(); i++)
	{
		result[i] *= factor;
	}

	return result;
}

template <typename T>
NumericArray<T> NumericArray<T>::operator + (const NumericArray<T>& n2) const
{
	if (Array<T>::Size() != n2.Size())
	{
		throw differencesizeexception();
	}

	NumericArray<T> result(*this);

	for (int i = 0; i < result.Size(); i++)
	{
		result[i] += n2[i];
	}

	return result;
}

// Numeric functionality
template <typename T>
T NumericArray<T>::DotProduct(const NumericArray<T>& n2) const
{ // Dot product.

	if (Array<T>::Size() != n2.Size())
	{
		throw differencesizeexception();
	}

	T result(0);

	for (int i = 0; i < Array<T>::Size(); i++)
	{
		result += (Array<T>::operator [] (i) * n2[i]);
	}

	return result;
}

#endif
