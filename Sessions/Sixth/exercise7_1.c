/* electric.c -- calculates electric bills */
#include <stdio.h>
#define RATE1 0.06898	/* ratio para los primeros 240 kwh*/
#define RATE2 0.12032	/* ratio para los siguientes 300 kwh*/
#define RATE3 0.14022	/* ratio por encima de 540 kwh*/
#define BREAK1 240.0		/* primer break point for ratio*/
#define BREAK2 540.0		/* segundo break point for ratio*/
#define BASE1 (RATE1*BREAK1)	/* costo para 240 kwh*/
#define BASE2 (BASE1+(RATE2*(BREAK2-BREAK1)))	/* costo para 540 Kwh*/

int main(void)
{
	float kwh;	/* killowatt-hours used*/
	float bill;	/* charges*/
	printf("Please enter the kwh used.\n");
	scanf("%f", &kwh);
	if(kwh<=BREAK1)
	bill=RATE1*kwh;
	else if (kwh <= BREAK2)		/* kwh between 240 and 540*/
	bill = BASE1+(RATE2*(kwh-BREAK1));
	else			/* kwh por encima de 540*/
	bill = BASE2+(RATE3*(kwh-BREAK2));
	//Mejorarlo printf("%.f", bill);
	return 0;	/* program terminates succesfully*/
}
