#include <stdio.h>
int main(void)
{
    int x, y;

    x = (2 + 3) * 6;
    printf("x: %d\n", x);

    x = (12 + 6)/2*3;
    printf("x: %d\n", x);
    
    y = x = (2 + 3)/4;
    printf("x: %d\ty: %d\n", x, y);

    y = 3 + 2*(x = 7/2);
    printf("x: %d\ty: %d\n", x, y);

    return 0;
}