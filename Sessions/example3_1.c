/* talkback.c -- curioso, programa inform�tico */
#include <stdio.h>
#include <string.h>
//#define DENSITY 62.4
void butler(void);		//prototipo de la funci�n
main()
{
#define DENSITY 62.4
float weight, volume;
int size, letters;
char name[20];

printf("Hola, �cu�l es su nombre?\n");
scanf("%s",name);	//no es necesario usar &
printf("%s, �cu�l es su peso en libros?\n",name);
scanf("%f", &weight);

size = sizeof name;
letters = strlen(name);
volume = weight/DENSITY;

printf("Bueno, %s, su volumen es %2.2f pues c�bicos. \n", name, volume);
printf("Tambi�n, su primer nombre tiene %d letras, \n", letters);
printf("y tenemos %d bytes para almacenarlos.\n", size);
butler();
}

void butler(void){
	char name[20];
	printf("%s Hola mundo", name);	//hay que declarar
}

