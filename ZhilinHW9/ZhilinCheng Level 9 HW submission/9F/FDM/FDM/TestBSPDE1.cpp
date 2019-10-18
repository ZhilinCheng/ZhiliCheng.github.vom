// TestBSPDE1.cpp
//
// Testing 1 factor BS model.
//
// (C) Datasim Education BV 2005-2011
//

#include "FdmDirector.hpp"
#include <boost/tuple/tuple.hpp>

#include <iostream>
#include <string>
using namespace std;

#include "UtilitiesDJD/ExcelDriver/ExcelDriverLite.hpp"



namespace BS // Black Scholes
{
	double sig = 0.3;
	double K = 65.0;
	double T = 0.25;
	double r = 0.08;
	double D = 0.0; // aka q

	double mySigma (double x, double t)
	{

		double sigmaS = sig*sig;

		return 0.5 * sigmaS * x * x;
	}

	double myMu (double x, double t)
	{
		
		return (r - D) * x;
	
	}

	double myB (double x, double t)
	{	
	
		return  -r;
	}

	double myF (double x, double t)
	{
		return 0.0;
	}

	double myBCL (double t)		
	{
		// Put
		return K *exp(-r * t);
	}

	double myBCR (double t)
	{
			
		// Put
		return 0.0; // P
	}

	double myIC (double x)
	{ // Payoff 
	
		// Put
		return max(K - x, 0.0);
	}

}


int main()
{
	// Store Batch 1 to Batch 4 data in a vector.
	typedef boost::tuple<double, double, double, double, double> TupleFive;
	vector<TupleFive> vecBatch;
	vecBatch.push_back(boost::make_tuple(0.25, 65, 0.30, 0.08, 0.0));
	vecBatch.push_back(boost::make_tuple(1.0, 100, 0.2, 0.0, 0.0));
	vecBatch.push_back(boost::make_tuple(1.0, 10, 0.50, 0.12, 0.0));
	vecBatch.push_back(boost::make_tuple(30.0, 100.0, 0.30, 0.08, 0.0));
	using namespace ParabolicIBVP;

	// Assignment of functions
	sigma = BS::mySigma;
	mu = BS::myMu;
	b = BS::myB;
	f = BS::myF;
	BCL = BS::myBCL;
	BCR = BS::myBCR;
	IC = BS::myIC;

	int J = 50; int N = 100000-1; // k = O(h^2) !!!!!!!!!


	double Smax = 50;			// Magix

	cout << "start FDM\n";
	for (int i = 0; i < vecBatch.size(); i++)
	{
		BS::T = vecBatch[i].get<0>();
		BS::K = vecBatch[i].get<1>();
		BS::sig = vecBatch[i].get<2>();
		BS::r = vecBatch[i].get<3>();
		BS::D = vecBatch[i].get<4>();
	}
	FDMDirector fdir(Smax, BS::T, J, N);

	fdir.doit();
	
	cout << "Finished\n";

	// Have you Excel installed (ExcelImports.cpp)
	printOneExcel(fdir.xarr, fdir.current(), string("Value"));

	return 0;
}
