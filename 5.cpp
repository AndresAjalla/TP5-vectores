#include <stdio.h>
#include <stdlib.h>

void venta(int*ventas){
	int total_ventas,vent_min=0,max_vent=0,i=0;
	
	for(i=1;i<=20;i++){
		
		printf("\n Ingrese ventas del vendedor %d: ",i);
		scanf("%d",&ventas[i]);
		
		total_ventas=total_ventas+ventas[i];
		vent_min=ventas[i];
		
		if (vent_min>max_vent){
			max_vent=vent_min;
		}
		
	}
	printf("\n El total de ventas es de: %d",total_ventas);
	printf("\n La mayor venta fue de: %d",max_vent);
}
int main() {
	int ventas[20],i=0;
	venta(ventas);
	system("\n pause");
	return 0;
}
