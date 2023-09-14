#include <stdio.h>
#include <stdlib.h>

void cuentas(int*num){
	int suma=0,producto=1,i=1,promedio=0,prom_baj=0,prom_arri=0;
	
	for (i=1;i<=10;i++){
		
		printf("\n Ingrese numero %d: ",i);
		scanf("%d",&num[i]);
		
		suma=suma+num[i];
		producto=producto*num[i];
		
	}
	promedio=suma/10;
	for (i=1;i<=10;i++){
		if (num[i]>promedio){
			prom_arri++;
		}
		else{
			prom_baj++;
		}
	}
	printf("\n La suma: %d",suma);
	printf("\n El producto: %d",producto);
	printf("\n El promedio: %d",promedio);
	printf("\n Cantidad de numero arriba del promedio: %d",prom_arri);
	printf("\n Cantidad de numero abajo del promedio: %d",prom_baj);
}
int main() {
	int suma=0,producto=1,num[10],i=1,promedio=0,prom_baj=0,prom_arri=0;
	cuentas(num);
	
	return 0;
}
