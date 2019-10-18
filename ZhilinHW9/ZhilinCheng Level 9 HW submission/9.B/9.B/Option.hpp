#pragma once
#ifndef Option_HPP
#define Option_HPP

#include <iostream>
using namespace std;
class Option
{
private: //at fist,I set all of this as pure virtue , but the test function cannot be used, I don't understand why
	virtual double CallPrice() const = 0;//Price of Call
	virtual double PutPrice() const = 0;//Price of Put
	virtual double CallDelta() const ;//Delta of Call
	virtual double PutDelta() const;//Delta of Put
	virtual double CallGamma() const;//Gamma of Call
	virtual double PutGamma() const;//Gamma of Put
	virtual double CallVega() const;//Vega of Call
	virtual double PutVega() const;//Vega of Put
	virtual double CallTheta() const; // Theta of call
	virtual double PutTheta() const; // Theta of put
public:
	enum OptionType optionType; // Option type, call or put
	virtual void Init();// Initilize all default value
	virtual void Copy(const Option&source);//	Copy values
	Option(); // Default constructor
	Option(const Option& source); // Copy constructor
	Option(const enum OptionType& optionType); // Constructor with option type
	virtual ~Option(); // Destructor
	// Member operator overloading
	Option& operator=(const Option&source);
	// Functions that calculate option price and sensitivities
	double Price() const;
	double Delta() const;
	double Gamma() const;
	double Vega() const;
	double Theta() const;
	// Modifier functions
	void toggle(); // Change option type
};
enum OptionType
{
	Put,
	Call
};	  
#endif  
