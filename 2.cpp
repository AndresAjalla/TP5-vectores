#include <stdio.h>
#include <stdlib.h>

int numeros(int*num, float promedio){
	promedio=(num[1]+num[2]+num[3]+num[4]+num[5])/5;
	
	printf("\n El promedio es %f:  ",promedio);
	
	
	if (num[1]>num[2] && num[1]>num[3] && num[1]>num[4] && num[1]>num[5]){
		printf("\n El numero mayor es %d",num[1]);
	}
	else if (num[2]>num[1] && num[2]>num[3] && num[2]>num[4] && num[2]>num[5]){
		printf("\n El numero mayor es %d",num[2]);
	}
	else if (num[3]>num[1] && num[3]>num[2] && num[3]>num[4] && num[3]>num[5]){
		printf("\n El numero mayor es %d",num[3]);
	}
	else if (num[4]>num[1] && num[4]>num[2] && num[4]>num[3] && num[4]>num[5]){
		printf("\n El numero mayor es %d",num[4]);
	}
	else if (num[5]>num[1] && num[5]>num[2] && num[5]>num[3] && num[5]>num[4]){
		printf("\n El numero mayor es %d",num[5]);
	}
	return promedio;
}
int main() {
	int num[6];
	float promedio;
	printf("\n Ingrese valor de numero 1: ");
	scanf("%d",&num[1]);
	printf("\n Ingrese valor de numero 2: ");
	scanf("%d",&num[2]);
	printf("\n Ingrese valor de numero 3: ");
	scanf("%d",&num[3]);
	printf("\n Ingrese valor de numero 4: ");
	scanf("%d",&num[4]);
	printf("\n Ingrese valor de numero 5: ");
	scanf("%d",&num[5]);
	numeros(num,promedio);
	
	system("pause");
	return 0;
}
