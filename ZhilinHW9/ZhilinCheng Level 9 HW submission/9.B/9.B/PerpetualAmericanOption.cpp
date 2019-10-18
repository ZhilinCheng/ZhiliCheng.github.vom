#include "PerpetualAmericanOption.hpp"
#include <string>
#include <vector>
using namespace std;
double PerpetualAmericanOption::CallPrice() const
{ 
	// Price of call
	return ::PerpetualCall(K, sig, r, S, b);
}
double PerpetualAmericanOption::PutPrice() const
{
	// Price of put
	return ::PerpetualPut(K, sig, r, S, b);
}
void PerpetualAmericanOption::Init()
{ // Initialise all default values

	Option::Init();
	K = 100;
	sig = 0.1;
	r = 0.1;
	S = 110;
	b = r;
}
void PerpetualAmericanOption::Copy(const PerpetualAmericanOption& source)
{
	// Copy all values
	Option::Copy(source);
	K = source.K;
	sig = source.sig;
	r = source.r;
	S = source.S;
	b = source.b;
}
PerpetualAmericanOption::PerpetualAmericanOption() : Option()
{ 
	//Default constructor
	Init();
}
PerpetualAmericanOption::PerpetualAmericanOption(const PerpetualAmericanOption& source) : Option(source)
{// Copy constructor
	Copy(source);
}
PerpetualAmericanOption::PerpetualAmericanOption(const enum OptionType& optionType)
{
	Init();
}
PerpetualAmericanOption::PerpetualAmericanOption(const struct PerpetualAmericanOptionData& optionData) : Option()
{ // Constructor with option data
	Init();
	K = optionData.K;
	sig = optionData.sig;
	r = optionData.r;
	S = optionData.S;
	b = optionData.b;
}
PerpetualAmericanOption::~PerpetualAmericanOption()
{ 
	// Destructor
}
PerpetualAmericanOption& PerpetualAmericanOption::operator = (const PerpetualAmericanOption& source)
{ 
	// Assignment operator
	Option::operator = (source);

	if (this == &source)
	{
		return *this;
	}

	Copy(source);

	return *this;
}
double PerpetualAmericanOption::PriceWithS(double newS) const
{ 
	// Using underlying price as argument

	if (optionType == Call)
	{
		return ::PerpetualCall(K, sig, r, newS, b);
	}
	else
	{
		return ::PerpetualPut(K, sig, r, newS, b);
	}
}
// Global Functions
vector<double> GenerateMeshArray(double begin, double end, int n)
{
	vector<double> vec;
	double h = (end - begin) / (n - 1);
	for (int i = 0; i < n; i++)
	{
		vec.push_back(begin + h * i);
	}

	return vec;
}
double PerpetualCall(double K, double sig, double r, double S, double b)
{
	double sig2 = sig * sig;
	double fac = b / sig2 - 0.5;
	fac*=fac;
	double y1 = 0.5 - b / sig2 + sqrt(fac + 2 * r / sig2);
	double fac2 = ((y1 - 1) / y1)*(S / K);
	double C = K * pow(fac2, y1) / (y1 - 1);
	return C;
}
double PerpetualPut(double K, double sig, double r, double S, double b)
{
	double sig2 = sig * sig;
	double fac = b / sig2 - 0.5;
	fac *= fac;
	double y2 = 0.5 - b / sig2 - sqrt(fac + 2 * r / sig2);
	double fac2 = ((y2 - 1) / y2)*(S / K);
	double P = K * pow(fac2, y2) / (1.0 - y2);
	return P;
}