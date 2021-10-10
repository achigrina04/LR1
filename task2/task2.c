#include <stdio.h>
#include<math.h>

double f(double x)					
{
	return 1 / sqrt(x + 2);
}

void main(void)
{
	double x = 14;
	double fres;

	fres = f(x);				   
	printf("x = %.4lf\n", x);
	printf("f = %.4lf\n", fres);
	printf("x = ");
	scanf_s("%lf", &x);
	fres = f(x);
	printf("f = %.4lf\n", fres);
}

