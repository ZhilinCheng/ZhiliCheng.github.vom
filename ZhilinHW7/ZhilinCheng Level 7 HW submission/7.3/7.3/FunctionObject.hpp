#ifndef FunctionObject_HPP
#define FunctionObject_HPP

template <typename T>
class FunctionObject
{
private:
	T barrier;

public:
	// Constructors
	FunctionObject();
	FunctionObject(const T& t);
	FunctionObject(const FunctionObject<T>& source);

	// Destructor
	~FunctionObject();

	// Member operator overloading
	FunctionObject<T>& operator = (const FunctionObject<T>& source);//assignment 
	int operator () (const T& t) const;
};

#endif
