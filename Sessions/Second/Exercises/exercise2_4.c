#include <stdio.h>

int main(void)  /*  Este programa es perfecto   */
{
    int cows, legs;

    printf("¿Cuántas patas de cows contó?\n");
    scanf("%d", &legs);

    cows = legs / 4;

    printf("Esto implica que hay %d cow(s).\n", cows);

    return  0;
}