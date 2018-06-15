/* goldyou.c - el valor de su peso en oro */
#include <stdio.h>
main()
{
	float weight, value;	/* dos variables de punto flotantes			*/
	char beep; 				/* una variable carácter					*/
	beep = '\007';			/* caracter "\a"							*/
							/* asignación de un carácter especial a beep*/
	printf("¿Cuánto vale su peso en oro?\n");
	printf("Por favor ingrese su peso en libras, \n");
	printf("y veremos. \n");
	scanf("%f", &weight);
							/* tomando el dato del usuario				*/
	value = 400.0 * weight * 14.5833;
							/* asume que el oro vale $400 por onza		*/
							/* 14.5833 convierte libras a onzas troyana	*/
	printf("%cSu peso en oro vale $%.2f%c.\n", beep, value, beep);
	printf("Ud. Fácilmente vale eso! Si el oro cae,");
	printf(" como más \n para mantener su valor. \n");
}

/*
%.2f me indica el número de decimales
*/