#include <stdio.h>
//6.5 4.3 6.2
//5.1 4.2 8.1
//8.0 9.0 10.0


int main(){
	int QtdLoop, I;
	float Valor1, Valor2, Valor3, MediaFinal;
	
	scanf("%d", &QtdLoop);
	
	for(I=1; I<=QtdLoop; I++){
		scanf("%f", &Valor1);
		scanf("%f", &Valor2);
		scanf("%f", &Valor3);
		MediaFinal = ((Valor1*2) + (Valor2*3) + (Valor3*5))/10;
		printf("%.1f\n", MediaFinal);
	}
}
