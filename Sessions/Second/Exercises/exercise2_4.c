#include <stdio.h>
main()
{
    int cows, legs;

    printf("¿Cuántas patas de vaca contó?\n");
    scanf("%d", &legs);

    cows = legs / 4;

    printf("Esto implica que hay %d cows.\n", cows);
}