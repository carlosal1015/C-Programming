/* flags.c - - ilustr algunos formatos flags */
#include <stdio.h>
main()
{
	printf("%x %x %#x/\n", 31, 31, 31);
	printf("**%d**% d**% d**\n", 42, 42, -42); // ver si hay distinción entre espacios...
	printf("**%5d**%5.3d**%05d**%0.53d**\n", 6, 6, 6, 6);
}
