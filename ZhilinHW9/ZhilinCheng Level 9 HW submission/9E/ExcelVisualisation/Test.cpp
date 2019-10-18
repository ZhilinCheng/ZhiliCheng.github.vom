#include "Option.hpp"
#include "ExcelDriverLite.hpp"
#include "EuropeanOption.hpp"
#include "Utilities.hpp"
#include <cmath>
#include <list>
#include <string>
#include <vector>
#include <boost/tuple/tuple.hpp>
#include <boost/tuple/tuple_io.hpp>
#include <iostream>
 using namespace std;


int main()
{
	double A = 10.0;
	double B = 50.0;
	int N = 41;
	auto x = CreateMesh(N, A, B);
	EuropeanOptionData optionData1;
	optionData1.T = 0.25;
	optionData1.K = 65;
	optionData1.sig = 0.3;
	optionData1.r = 0.08;
	optionData1.S = 60;
	optionData1.b = 0.08;
	EuropeanOption option1(optionData1);

	vector<double> vec;
	for (int j = 0; j < x.size(); j++)
	{
		vec.push_back(option1.PriceWithS(x[j]));
	}
	auto fun = [](double vec) { return vec * vec; };
	auto vec1 = CreateDiscreteFunction< std::vector<double>>(x, fun);
	ExcelDriver xl; xl.MakeVisible(true);
	xl.CreateChart(x, vec1, "OptionPrice");

}