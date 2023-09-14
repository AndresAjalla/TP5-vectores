#include <stdio.h>
#include <stdlib.h>

void resultado (int *notas){
	
	int i=1;
	for (i=1;i<15;i++) {
		if (notas[i]>8){
			printf("\n ");
			printf("\n %d",notas[i]);
		}
	}
}
	
	int main() {
		
		int i=1,notas[15]; 
		
		for (i=0;i<15;i++){
			printf("\n Ingrese una nota %d: ",i);
			scanf ("%d",&notas[i]);
		}
		printf("\n NOTAS DE LOS ALUMNOS MAYORES A 8:");
		
		resultado(notas);
		return 0;
	}
