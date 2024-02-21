#include <stdio.h>

int main(){
	float Valor;
	int I, Positivo;
	
	Positivo = 0;
	
	for(I=1; I<=6; I++){
		scanf("%f", &Valor);
		if(Valor > 0){
			Positivo++;
		}
	}
	
	printf("%d valores positivos\n", Positivo);
}
