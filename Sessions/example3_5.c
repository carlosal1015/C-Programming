/* width.c - - campos width*/
#include <stdio.h>
#define PAGES 336
main()
{
printf("/%2d/\n", PAGES);
printf("/%10d/\n", PAGES);
printf("/%-10d/\n", PAGES);
}
//no debe ser mas de 10 espacios
