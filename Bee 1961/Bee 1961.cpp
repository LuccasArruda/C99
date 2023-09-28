#include <stdio.h>

int main(){
	int I, AlturaPulo, QtdCanos, AlturaProximoCano, AlturaCanoAnterior, DiferencaAltura;
	
	scanf("%d %d", &AlturaPulo, &QtdCanos);
	scanf("%d", &AlturaCanoAnterior);
	for(I=2; I<=QtdCanos; I++){
		scanf("%d", &AlturaProximoCano);
		DiferencaAltura = AlturaProximoCano - AlturaCanoAnterior;
		if (DiferencaAltura > AlturaPulo){
			printf("GAME OVER\n");
			return 0;	
		}else{
			AlturaCanoAnterior = AlturaProximoCano;	
		}
	}
	printf("YOU WIN\n");
	return 0;
}
