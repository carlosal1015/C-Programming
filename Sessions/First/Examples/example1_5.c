/* two_func.c - un programa que usa dos funciones en una sola */
#include <stdio.h>
void butler(void);		/* prototipo de la función en ANSI C*/
void mayordomo(void);	/* prototipo de la función en ANSI C*/
main()
{
	printf("Añadirá la función Butler.\n");
	butler();
	printf("Sí. Tráeme un té chino y unos discos.\n");
	mayordomo();
}

void butler(void)
{
	printf("¿Me llamo Sir?\n");
}

void mayordomo(void)
{
	printf("Me llamo Sir.\n");
}
// Todas las funciones se llaman desde main.