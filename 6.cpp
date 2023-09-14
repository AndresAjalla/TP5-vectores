#include <stdio.h>
#include <stdlib.h>

void sueldo(int*sueldos){
	int may=0,min=20,i=0;
	
	for (i=1;i<=20;i++ ){
		printf("\n Ingrese sueldo %d: ",i);
		scanf ("%d",&sueldos[i]);
		
		if (sueldos[i] > 2000){
			may=may+1;	
		}
		
		
	}
	min=20-may;
	printf("\n Cantidad de empleados que cobran mas de 2000: %d",may);
	printf("\n Cantidad de empleados que cobran menos de 2000: %d",min);
}
int main(){
	int sueldos[20];
	sueldo(sueldos);
	return 0;
}
