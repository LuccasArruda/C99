#include <stdio.h>

int main(){
	int Distancia;
	float Combustivel, Consumo;
	scanf("%d", &Distancia);
	scanf("%f", &Combustivel);
	Consumo = Distancia/Combustivel;
	printf("%.3f km/l\n", Consumo);
	return 0;
}
