/* praise1.c -- usa un surtido de strings */
#include <stdio.h>
#include <string.h>	/* provee el prototipo de strlen()	*/
#define PRAISE "Por mi bien, es un gran nombre!"
main()
{
char name[40];

printf("Hola, ¿Cuál es su nombre? \n");
scanf("%s", name);
printf("Hola, %s. %s \n",name, PRAISE);
printf("Tu nombre ocupa %d letras ocupa %d celdas de memoria. \n", strlen(name), sizeof name);
printf("y ocupa %d celdas de memoria.\n", sizeof PRAISE);
}
