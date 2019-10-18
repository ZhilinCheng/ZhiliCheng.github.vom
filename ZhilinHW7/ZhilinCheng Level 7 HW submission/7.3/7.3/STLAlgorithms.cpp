#include <vector>
#include <algorithm>
#include <iostream>
#include "FunctionObject.cpp"
using namespace std;
// Global function checking the input is less than a certain value.
int Less(double input)
{
	const double barrier = 10;
	return input < barrier;
}
int main()
{
	vector<double> vector1;
	for (int i = 0; i < 20; i++)
	{
		vector1.push_back(i + 1);
	}
	// Using the global function to get the number of elements less than a certain value.
	int result1 = count_if(vector1.begin(), vector1.end(), Less);
	cout << "The number of elements that are less than 10 is " << result1 << endl;
	
	// Using the function object to get the number of elements less than a certain value.
	double barrier = 10;
	int result2 = count_if(vector1.begin(), vector1.end(), FunctionObject<double>(barrier));
	cout << "The number of elements that are less than " << barrier << " is " << result2 << endl;
	getchar();
}