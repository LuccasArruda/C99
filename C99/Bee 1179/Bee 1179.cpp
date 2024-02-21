#include<stdio.h>

int main(){
	int I, J, controlePar = 0, controleImpar = 0, pares[5], impares[5], valor;

	for(I = 0; I < 15; I++){
		scanf("%d", &valor);
		
		if((valor % 2) == 0){
			if(controlePar == 5){
				for(J = 0; J < 5; J++){
					printf("par[%d] = %d\n", J, pares[J]);
				}
				controlePar = 0;
				pares[controlePar] = valor;
				controlePar++;
			}
			else{
				pares[controlePar] = valor;
				controlePar++;
			}
		}
		else{
			if(controleImpar == 5){
				for(J = 0; J < 5; J++){
					printf("impar[%d] = %d\n", J, impares[J]);
				}
				controleImpar = 0;
				impares[controleImpar] = valor;
				controleImpar++;
			}
			else{
				impares[controleImpar] = valor;
				controleImpar++;
			}
		}
	}
	
	for(I = 0; I < controleImpar; I++){
		printf("impar[%d] = %d\n", I, impares[I]);
	}
	
	for(I = 0; I < controlePar; I++){
		printf("par[%d] = %d\n", I, pares[I]);
	}
	
	return 0;
}
