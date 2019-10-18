#ifndef FunctionObject_CPP
#define FunctionObject_CPP

#include "FunctionObject.hpp"
// Constructors
template <typename T>
FunctionObject<T>::FunctionObject() 
{
	// Default constructor
}
template <typename T>
FunctionObject<T>::FunctionObject(const T& t):barrier(t)
{ 
	// Constructor with the limit value as input.
}
template <typename T>
FunctionObject<T>::FunctionObject(const FunctionObject<T>& source) : barrier(source.barrier)
{ 
	// Copy constructor.
}
template <typename T>
FunctionObject<T>::~FunctionObject()
{ 
	// Destructor.
}
template <typename T>
FunctionObject<T>& FunctionObject<T>::operator = (const FunctionObject<T>& source)
{ 
	// Assignment operator
	if (this == &source)
	{
		return *this ;
	}

	barrier = source.barrier;
	return *this;
}
template <typename T>
int FunctionObject<T>::operator () (const T& t) const
{ 
	// () operator
	return t < barrier;
}
#endif