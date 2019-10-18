#include "Option.hpp"
#include "PerpetualAmericanOption.hpp"
#include <iostream>
#include <vector>
#include <Windows.h>

using namespace std;
int main()
{
	//test Option Price
	double K, sig, r, S, b;
	cout << "K: "; cin >> K;
	cout << "sig: "; cin >> sig;
	cout << "r: "; cin >> r;
	cout << "S: "; cin >> S;
	cout << "b: "; cin >> b;
	vector<double> vecU = GenerateMeshArray(10, 50, 41);
	//B.b Use global functions.
	cout << "S = " << S << ", C = " << PerpetualCall(K, sig, r, S, b) << ", P = " << PerpetualPut(K, sig, r, S, b) << endl;
	// Use instances of PerpetualAmericanOption class.
	PerpetualAmericanOptionData optionData;
	optionData.K = K;
	optionData.sig = sig;
	optionData.r = r;
	optionData.S = S;
	optionData.b = b;
	PerpetualAmericanOption perpetualOption(optionData); 
	cout << "S = " << S << ", C = " << perpetualOption.Price() << endl;
	perpetualOption.toggle();
	cout << "S = " << S << ", P = " << perpetualOption.Price() << endl;
	perpetualOption.toggle();
	// B.c) Compute prices for a range of underlying value
	vector<double> vecC1, vecP1;
	for (int j = 0; j < vecU.size(); j++)
	{
		vecC1.push_back(perpetualOption.PriceWithS(vecU[j]));
		perpetualOption.toggle();
		vecP1.push_back(perpetualOption.PriceWithS(vecU[j]));
		perpetualOption.toggle();
	}

	for (int j = 0; j < vecC1.size(); j++)
	{
		cout << "S = " << vecU[j] << ", C = " << vecC1[j] << ", P = " << vecP1[j] << endl;
	}
	system("pause");
	return 0;
}

