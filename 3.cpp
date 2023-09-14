#include <stdio.h>
#include <stdlib.h>

void numeros(int*num){
	while (num[1]<num[2]) { 
		printf ("%d \n",num[1]+1);
		
		num[1] ++;
	}
}
int main() {	
	int num[2];
	printf ("\n ingrese un numero: ");
	scanf ("%d", &num[1]);
	printf ("\n ingrese otro numero: ");
	scanf ("%d", &num[2]);
	numeros(num);
	
	system("pause"); 
	return 0;
}
