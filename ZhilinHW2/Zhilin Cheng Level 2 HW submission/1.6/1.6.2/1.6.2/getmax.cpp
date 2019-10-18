#include <stdio.h>
#include "Defs.h"
int main()
{
	double a, b, c;
	//compare a with b
	scanf("%lf,lf", &a, &b);
		printf("the max of a,b is%f%f", a, b, MAX2(a, b));
		//compare a,b as well as c;

		scanf("%lf,lf", &a, &b);
		printf("the max of a,b,c is %lf,%lf,%lf", a, b, c, MAX3(a, b, c));
}
