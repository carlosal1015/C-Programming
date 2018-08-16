#include <stdio.h>
#define FORMAT "%s is a string\n"
int main(void)
{
	int num = 0;

	printf(FORMAT,FORMAT);
	printf("%d\n", ++num);
	printf("%d\n", num++);
	printf("%d\n", num--);
	printf("%d\n", num);
	
	return 0;
}
