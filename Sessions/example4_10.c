/* add_one.c -- incrementando: prefijo y postfijo */
#include <stdio.h>
main()
{
	int ultra = 0, super = 0;
	
	while(ultra<5){
		printf("super = %d, ultra = %d \n", super, ultra);
		super++;
		++ultra;
		printf("super = %d, ultra = %d \n", super, ultra);
	}
}
