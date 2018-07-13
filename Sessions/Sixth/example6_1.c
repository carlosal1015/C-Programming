/*	summing.c --suma enteros dados de forma interactiva	*/
#include <stdio.h>
main()
{
	long num;
	long sum = 0L;	/* inicializa sum a cero */
	int status, i=1;
	
	printf("Ingrese un número a ser sumado (q para terminar):\n");
	status = scanf("%ld", &num);	// reconoce al long.
	while (status==1)	/* == es decir, "es igual a" */
	{
		sum = sum + num;
		i = i + 1;
		printf("Ingrese el siguiente entero a sumar.");
		printf("Ingrese q para terminar.\n");
		status=scanf("%ld", &num);
	}
	float prom = (float)sum / i;
	printf("Estos enteros suma %ld.\n", sum);
	printf("El promedio es %.2f.\n", prom);
}
/*	quiere decir 1 distinto de cero
	las sentencias va entre llaves.
*/
