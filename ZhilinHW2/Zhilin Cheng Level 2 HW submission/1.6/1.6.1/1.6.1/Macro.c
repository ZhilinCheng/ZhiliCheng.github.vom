#include <stdio.h>
#include "Defs.h"
int main( )
{
	double a, b;

	scanf_s("%lf\n %lf\n", &a,& b);
	
		// Print variable a.
		PRINT1(a, b);

		// Print variable a and b.
		PRINT2(a, b);
		return 0;
}

