/* seeds -- programa que*/
#include <stdio.h>
main(){
int n=1, aux = 1;
printf("�Cu�l es su orden de m�rito?\n");
//scanf("%d",&n);
	while(n<50){
		n = n++;
		//printf("%d\n", aux);
		aux *= 2;
	}
printf("El lugar %d recibe %d granos.\n", n, aux);
}
float i, granos =1;
	for(i=0; i<49;i++){
		granos*=2;
	}
