#include <stdio.h>
int main(void)
{
	unsigned int number = 5;
	float pi = 3.14159;
	char university[40] = "Universidad Nacional de Ingeniería";

	printf("Primer flag, justificado a la izquierda:\n"
	"%-20s\n", university);
	printf("Segundo flag, valores con signos + (más) o - (menos):\n"
	"%+6.2f\n", pi);
	printf("Tercer flag, valores con espacio en blanco:\n"
	"% 6.2f\n", pi);
	printf("Cuarto flag, conversión de especificación:\n"
	"%#o\t%#8.0f\t%+#10.3E\n", number, pi, pi);

	return 0;
}