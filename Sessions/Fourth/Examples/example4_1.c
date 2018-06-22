/*shoes1.c --convierte varias tallas de zapato a pulgadas*/
#include <stdio.h>
#define OFFSET 7.64
#define SCALE 0.325
main()
{
float shoe, foot;
printf("Talla de zapato para hombre longitud \t\tpie\n");
shoe = 3.0;
	while(shoe<18.5){									/* Inicio del while loop*/
														/* Inicio del bloque*/
		foot = SCALE*shoe+OFFSET;
		printf("\t\t\t%10.1f%15.2f pulgadas\n", shoe, foot);
		//shoe = shoe + 1.0;
														/* Final del bloque*/
	}													/* Final del while loop*/
printf("Si su pie lo calza, uselo.\n");
}
