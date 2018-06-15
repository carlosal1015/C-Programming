/* badcount.c --conteo incorrecto de argumentos	*/

#include <stdio.h>
main(){
int f = 4;
int g = 5;

printf("%d \n", f, g);		/* muchos argumentos	*/
printf("%d %d \n", f);		/* pocos argumentos		*/
}
