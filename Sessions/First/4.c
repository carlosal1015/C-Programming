/* two_func.c - un programa que usa dos funciones en una sola
*/
#include <stdio.h>
void butler(void);	/* prototipo de funcion en ANSI C*/
void mayordomo(void);	/* prototipo de funcion en ANSI C*/
main()
{
	printf("Añadirá la funcion Butler.\n");
	butler();
	printf("Si. Traeme un te chino y unos discos. \n");
	mayordomo();
}

void butler(void)
{
	printf("Me llamo Sir?\n ");
}

void mayordomo(void)
{
	print("Me llamo Sir.\n");
}
//Se debe llamar desde la main.
