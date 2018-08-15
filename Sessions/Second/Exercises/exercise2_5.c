#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
	int int_desborde;
	int MAX_INTEGER = INT_MAX;
	float flt_desborde, flt_subdesborde;
	float MIN_FLOAT = FLT_MIN;
	float MAX_FLOAT = FLT_MAX;
	
	// desborde/subdesborde creado artificialmente
	int_desborde = INT_MAX + 1;
	flt_desborde = FLT_MAX * 2.;
	flt_subdesborde = FLT_MIN / 2.;
	
	// imprimir resultados
	printf("Max integer: %d \tMax integer + 1: %d\n", INT_MAX, int_desborde);
	printf("Max float: %f \tMax float * 2: %f\n", FLT_MAX, flt_desborde);
	printf("Min float: %f \tMin float / 2: %f\n", FLT_MIN, flt_subdesborde);

	return 0;
}