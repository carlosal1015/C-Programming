/* talkback.c -- curioso, programa informático */
#include <stdio.h>
#include <string.h>
//#define DENSITY 62.4

void butler(void);			// Prototipo de la función butler.

main()
{
#define DENSITY 62.4

float weight, volume;
int size, letters;
char name[20];

printf("Hola, ¿cuál es su nombre?\n");
scanf("%s", name);			//Con los datos carácter ya no es necesario usar &
printf("%s, ¿cuál es su peso en libras?\n",name);
scanf("%f", &weight);

size = sizeof name;
letters = strlen(name);
volume = weight/DENSITY;

printf("Bueno, %s, su volumen es %2.2f pies cúbicos. \n", name, volume);
printf("También, su primer nombre tiene %d letras, \n", letters);
printf("y tenemos %d bytes para almacenarlos.\n", size);

butler();
}

void butler(void){
	char name[20];
	printf("%s Hola mundo", name);	// Es necesario declarar name. ¿Qué se obtiene en name?
}

