#include <stdio.h>
int butler(int p);		// Prototipo de la función butler
main()
{
	butler(0);
	printf("Sí, me trae un cafe, por favor.\n");
	butler(1);
}
int butler(int p){
	if(p==0) printf("¿Me llamaba señor?\n");
	if(p==1) printf("Enseguida señor.\n");
}
/*
Enviar las tareas al aula virtual.
Hay que introducir el tipo de dato que se trabaja.
*/