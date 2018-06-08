/* toonig.c -excede tamaño de int en nuestro sistema */
#include <stdio.h>
main(){
//short i = 32767;
short i = 32767;//65533;
//printf("%d %d %d\n", i, i+1, i+2);
//printf("%d %d %d\n", 2i, 2i+1, 2i+2);
printf("%d %d %d", i, i+1, i+2);
}
