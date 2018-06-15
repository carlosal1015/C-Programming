/* toonig.c -excede el tamaño de int en nuestro sistema */
#include <stdio.h>
main(){
    short i = 32767;
    short j = 65533;
    //printf("%d %d %d\n", i, i+1, i+2);
    //printf("%d %d %d\n", 2i, 2i+1, 2i+2);
    printf("%d %d %d %d %d\n", i-2, i-1, i, i+1, i+2);
    printf("%d %d %d %d %d\n", 2i-2, 2i-1, 2i, 2i+1, 2i+2);

    printf("%d %d %d %d %d\n", j-2, j-1, j, j+1, j+2);
}
