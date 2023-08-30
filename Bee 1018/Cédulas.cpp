#include <stdio.h>
#include <math.h>

int main(){
	setlocale(LC_ALL,"");
	int Dinheiro, Resultado, I;
	int Cedulas[7] = {100, 50, 20, 10, 5, 2, 1};
	
	scanf("%d", &Dinheiro);
	
	for(I = 0; I < 7; I++){
		Resultado = Dinheiro/Cedulas[I];
		Dinheiro = Dinheiro%Cedulas[I];
		printf("%d nota(s) de R$ %d,00.\n", Resultado, Cedulas[I]);	
	}
	
	return 0;
}
