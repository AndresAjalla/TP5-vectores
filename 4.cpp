#include <stdio.h>
#include <stdlib.h>

void notas(int*nota){
	int i=0;
	float prom_curso,prom;
	
	for(i=1;i<=30;i++){
		
		printf("\n Ingrese nota %d: ",i);
		scanf("%d",&nota[i]);
		
		prom_curso=prom_curso+nota[i];	
		
	}
	prom=prom_curso/30;
	printf("\n El promedio de notas es: %f",prom);
}
int main() {
	int nota[30];
	int i=0;
	notas(nota);
	system("pause");
	return 0;
}
