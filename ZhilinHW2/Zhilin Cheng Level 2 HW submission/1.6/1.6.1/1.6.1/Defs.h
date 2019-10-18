#include <stdio.h>
#ifndef PRINT1
#define PRINT1(a, b) printf("a = %lf\n", a)
#endif 

#ifndef PRINT2
#define PRINT2(a, b) printf("a = %lf, b = %lf\n", a, b)
#endif 
