#include <stdio.h>
#include <math.h>
#include <locale.h>

int Calculo(int *Dinheiro, int Cedula){
	int Resultado;
	Resultado = *Dinheiro/Cedula;
	*Dinheiro = *Dinheiro%Cedula;
	return Resultado;
}

int main(){
	setlocale(LC_ALL,"");
	int Dinheiro, Resultado, I;
	int Cedulas[7] = {100, 50, 20, 10, 5, 2, 1};
	
	scanf("%d", &Dinheiro);
	
	for(I = 0; I < 7; I++)
		printf("%d nota(s) de R$ %d,00.\n", Calculo(&Dinheiro, Cedulas[I]), Cedulas[I]);
	
	return 0;
}
