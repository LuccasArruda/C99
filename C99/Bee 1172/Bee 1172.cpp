#include<stdio.h>

int main(){
	int valores[10], I;
	
	for(I = 0; I < 10; I++){
		scanf("%d", &valores[I]);
		if(valores[I] <= 0){
			valores[I] = 1;
		}
	}
	
	for(I = 0; I < 10; I++){
		printf("X[%d] = %d\n", I, valores[I]);
	}
	
	return 0;
}
