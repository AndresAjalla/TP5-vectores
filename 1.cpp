#include <stdio.h>
#include <stdlib.h>

int resistencias(int*r, int rt){
	rt=rt+r[1]+r[2]+r[3]+r[4]+r[5];
	
	printf("\n R1:  %d",r[1]);	
	printf("\n R2:  %d",r[2]);	
	printf("\n R3:  %d",r[3]);	
	printf("\n R4:  %d",r[4]);	
	printf("\n R5:  %d",r[5]);	
	
	printf("\n Resultado: %d",rt);
	return rt;
}
int main() {
	int r[6];
	int rt=0;
	printf("\n Ingrese resistencia 1 :  ");	
	scanf("%d",&r[1]);
	printf("\n Ingrese resistencia 2:  ");	
	scanf("%d",&r[2]);
	printf("\n Ingrese resistencia 3:  ");	
	scanf("%d",&r[3]);
	printf("\n Ingrese resistencia 4:  ");	
	scanf("%d",&r[4]);
	printf("\n Ingrese resistencia 5:  ");	
	scanf("%d",&r[5]);
	resistencias(r,rt);
	
	system("pause");
	return 0;
}
