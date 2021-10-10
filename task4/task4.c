#include <stdio.h>
#include <math.h>

void f(void);
double x = 2;
double result;

void main(void)
{
	f();								
	printf("x = %.4lf\n", x);
	printf("f = %.4lf\n", result);
	printf("x = ");
	scanf_s("%lf", &x);
	f();
	printf("f = %.4lf\n", result);
}

void f(void)
{
	result = 1 / sqrt(x + 2);
}