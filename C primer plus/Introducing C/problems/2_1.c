// 2_1.c problem
#include <stdio.h>
int main(void)
{
    char name[10] = "Gustav";
    char surname[10] = "Mahler";
    
    printf("%s %s\n", name, surname);
    printf("%s\n%s\n",name, surname);
    printf("%s ", name);
    printf("%s\n", surname);

    return 0;
}