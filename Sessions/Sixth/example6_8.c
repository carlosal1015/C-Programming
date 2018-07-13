/* power.c raises number to integer power*/
#include <stdio.h>
double power(double, int);	/* ANSII prototype*/
main()
{
	double x, xpow;
	int n;
	
	printf("Enter a number and the positive integer power");
	printf("to which\nthe numer will be raised. Enter q");
	printf(" to quit\n");
	while(scanf("%lf%d", &x, &n)==2)	//debe entrar dos valores.
	{
		xpow=power(x,n);	//function call
		printf("%.3e to the power %d is %.3e \n", x, n, xpow);
	}
}

double power(double a, int b)	//solo deben entrar dos números.
{
	double pow = 1;
	int i;
	for(i=1; i<=b; i++)
	pow*=a;
	return pow;		//return the value of pow
}
