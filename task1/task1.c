#include <stdio.h>
#include<math.h>

void main(void)
{
	double x = 14;					
	double f;						
	f = 1 / sqrt(x + 2);
	printf("x = %.4lf\n", x);		    
	printf("f = %.4lf\n", f);		
	printf("x = ");					 
	scanf_s("%lf", &x);				
	f = 1 / sqrt(x + 2);
	printf("f = %.4lf\n", f);					
}

