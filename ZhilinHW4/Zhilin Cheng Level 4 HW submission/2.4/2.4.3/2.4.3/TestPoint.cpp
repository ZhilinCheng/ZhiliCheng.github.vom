#include "Point.hpp"
#include <iostream>
#include <string>
#include <iostream>
using namespace std;

int main()
{
	Point p(1.0, 1.0);
	//if (p == 1.0) cout << "Equal!" << endl;
	//else cout << "Not equal" << endl;

	if (p == (Point)1.0) cout << "Equal!" << endl;
	getchar();
	return 0;
}