/* colddays.c --finds percentage of days below freezing */
#include <stdio.h>
#define SCALE "Celsius"
#define FREEZING 0
int main (void){
	float temperature;
	int freezing = 0;
	int days = 0;
	
	printf("Enter the list of daily low temperature.\n");
	printf("Use %s, and enter q to quit.\n", SCALE);
	while (scanf("%f", &temperature)==1)
	{
		days++;
		if (temperature<FREEZING)
		freezing++;
	}
	if (days!=0)
	printf("%d days total: %0.f%% were below freezing.\n", days, 100.0*(float) freezing/days);
	if (days==0)
	printf("No data entered!\n");
	return 0; /* program terminates succesfully*/
}
