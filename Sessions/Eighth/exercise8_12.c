#include <stdio.h>
#include <stdlib.h>

int main ()
{
	FILE *fichero;
	char texto[100];
	
	fichero = fopen("origen1.txt", "r");
	if (fichero==NULL)
	{
		printf("No se puede abrir el archivo.\n");
		system("Pause");
		exit(1);
	}
	printf("Contenido del archivo:\n");
	fgets(texto,100,fichero);
	while(feof(fichero)==0)
	{
		printf("%s", texto);
		fgets(texto,100,fichero);
	}
	if (fclose(fichero)!=0)
		printf("Problemas al cerrar el archivo\n");
		system("Pause");
	return 0;
}

//enviar al profesor.
