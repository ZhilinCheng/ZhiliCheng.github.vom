
#include "EuropeanOption.hpp"
#include <boost/math/distributions/normal.hpp>
#include <cmath>
#include <iostream>

using namespace boost::math;
using namespace std;

double EuropeanOption::CallPrice() const
{ // Price of call

	return ::CallPrice(T, K, sig, r, S, b);
}

double EuropeanOption::PutPrice() const
{ // Price of put

	return ::PutPrice(T, K, sig, r, S, b);
}

double EuropeanOption::CallDelta() const
{ // Delta of call

	return ::CallDelta(T, K, sig, r, S, b);
}

double EuropeanOption::PutDelta() const
{ // Delta of put

	return ::PutDelta(T, K, sig, r, S, b);
}

double EuropeanOption::CallGamma() const
{ // Gamma of call

	return ::CallGamma(T, K, sig, r, S, b);
}

double EuropeanOption::PutGamma() const
{ // Gamma of put

	return ::PutGamma(T, K, sig, r, S, b);
}

double EuropeanOption::CallVega() const
{ // Vega of call

	return ::CallVega(T, K, sig, r, S, b);
}

double EuropeanOption::PutVega() const
{ // Vega of put

	return ::PutVega(T, K, sig, r, S, b);
}

double EuropeanOption::CallTheta() const
{ // Theta of call

	return ::CallTheta(T, K, sig, r, S, b);
}

double EuropeanOption::PutTheta() const
{ // Theta of put

	return ::PutTheta(T, K, sig, r, S, b);
}

void EuropeanOption::Init()
{ // Initialise all default values

	Option::Init();
	T = 0.25;
	K = 65;
	sig = 0.30;
	r = 0.08;
	S = 60;
	b = r;
}

void EuropeanOption::Copy(const EuropeanOption& source)
{ // Copy all values

	Option::Copy(source);
	T = source.T;
	K = source.K;
	sig = source.sig;
	r = source.r;
	S = source.S;
	b = source.b;
}

EuropeanOption::EuropeanOption() : Option()
{ // Default constructor

	Init();
}

EuropeanOption::EuropeanOption(const EuropeanOption& source) : Option(source)
{ // Copy constructor

	Copy(source);
}

EuropeanOption::EuropeanOption(const OptionType& newOptionType) : Option(newOptionType)
{ // Constructor with option type
	
	Init();
}

EuropeanOption::EuropeanOption(const struct EuropeanOptionData& optionData) : Option()
{ // Constructor with option data

	Init();
	T = optionData.T;
	K = optionData.K;
	sig = optionData.sig;
	r = optionData.r;
	S = optionData.S;
	b = optionData.b;
}

EuropeanOption::~EuropeanOption()
{ // Destructor
}

EuropeanOption& EuropeanOption::operator = (const EuropeanOption& source)
{ // Assignment operator

	Option::operator = (source);

	if (this == &source)
	{
		return *this;
	}

	Copy(source);

	return *this;
}

double EuropeanOption::CallToPut(double c) const
{ // Use put-call parity to calculate put price

	return c + K * exp(-r * T) - S;
}

double EuropeanOption::PutToCall(double p) const
{ // Use put-call parity to calculate call price

	return p + S - K * exp(-r * T);
}

double EuropeanOption::PriceWithS(double newS) const
{
	if (optionType == Call)
	{
		return ::CallPrice(T, K, sig, r, newS, b);
	}
	else
	{
		return ::PutPrice(T, K, sig, r, newS, b);
	}
}

double EuropeanOption::PriceWithT(double newT) const
{
	if (optionType == Call)
	{
		return ::CallPrice(newT, K, sig, r, S, b);
	}
	else
	{
		return ::PutPrice(newT, K, sig, r, S, b);
	}
}

double EuropeanOption::PriceWithSig(double newSig) const
{
	if (optionType == Call)
	{
		return ::CallPrice(T, K, newSig, r, S, b);
	}
	else
	{
		return ::PutPrice(T, K, newSig, r, S, b);
	}
}

double EuropeanOption::DeltaDiff(double S, double h) const
{
	return (PriceWithS(S + h) - PriceWithS(S - h)) / (2.0 * h);
}

double EuropeanOption::GammaDiff(double S, double h) const
{
	return (PriceWithS(S + h) - 2.0 * PriceWithS(S) + PriceWithS(S - h)) / (h * h);
}

// Global Functions
double CallPrice(double T, double K, double sig, double r, double S, double b)
{
	double tmp = sig * sqrt(T);
	double d1 = (log(S / K) + (b + (sig * sig) * 0.5) * T) / tmp;
	double d2 = d1 - tmp;
	normal_distribution<> normalDist(0, 1);

	return (S * exp((b - r) * T) * cdf(normalDist, d1)) - (K * exp(-r * T) * cdf(normalDist, d2));
}

double PutPrice(double T, double K, double sig, double r, double S, double b)
{
	double tmp = sig * sqrt(T);
	double d1 = (log(S / K) + (b + (sig * sig) * 0.5) * T) / tmp;
	double d2 = d1 - tmp;
	normal_distribution<> normalDist(0, 1);

	return (K * exp(-r * T) * cdf(normalDist, -d2)) - (S * exp((b - r) * T) * cdf(normalDist, -d1));
}

double CallDelta(double T, double K, double sig, double r, double S, double b)
{
	normal_distribution<> normalDist(0, 1);
	double tmp = sig * sqrt(T);
	double d1 = (log(S / K) + (b + (sig * sig) * 0.5) * T) / tmp;
	return exp((b - r) * T) * cdf(normalDist, d1);
}

double PutDelta(double T, double K, double sig, double r, double S, double b)
{
	return CallDelta(T, K, sig, r, S, b) - exp((b - r) * T);
}

double CallGamma(double T, double K, double sig, double r, double S, double b)
{
	normal_distribution<> normalDist(0, 1);
	double tmp = sig * sqrt(T);
	double d1 = (log(S / K) + (b + (sig * sig) * 0.5) * T) / tmp;
	return pdf(normalDist, d1) * exp((b - r) * T) / (S * sig * sqrt(T));
}

double PutGamma(double T, double K, double sig, double r, double S, double b)
{
	return CallGamma(T, K, sig, r, S, b);
}

double CallVega(double T, double K, double sig, double r, double S, double b)
{
	normal_distribution<> normalDist(0, 1);
	double tmp = sig * sqrt(T);
	double d1 = (log(S / K) + (b + (sig * sig) * 0.5) * T) / tmp;
	return S * sqrt(T) * exp((b - r) * T) * pdf(normalDist, d1);
}

double PutVega(double T, double K, double sig, double r, double S, double b)
{
	return CallVega(T, K, sig, r, S, b);
}

double CallTheta(double T, double K, double sig, double r, double S, double b)
{
	normal_distribution<> normalDist(0, 1);
	double tmp = sig * sqrt(T);
	double d1 = (log(S / K) + (b + (sig * sig) * 0.5) * T) / tmp;
	double d2 = d1 - tmp;
	return -S * sig * exp((b - r) * T) * pdf(normalDist, d1) / (2 * sqrt(T))
		- (b - r) * S * exp((b - r) * T) * cdf(normalDist, d1) - r * K * exp(-r * T) * cdf(normalDist, d2);
}

double PutTheta(double T, double K, double sig, double r, double S, double b)
{
	return CallTheta(T, K, sig, r, S, b) + r * K * exp(-r * T) + S * exp((b - r) * T) * (b - r);
}