#include <stdio.h>
int main()
{
	void Swap(double* pi, double* pj);

	double i, j;
	double temp;
	
	scanf_s("%lf %lf", &i, &j);
	//use swap function
	Swap(&i, &j);
	printf("%lf %lf\n", i, j);
	return 0;
	 
}
void Swap(double* pi, double* pj)
{
	double temp;

	temp = (*pi);
	(*pi) = (*pj);
	(*pj) = temp;

}