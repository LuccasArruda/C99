#include <stdio.h>

int recorde(int duracaoTreino, int distanciaTreino){
	return (duracaoTreino + distanciaTreino)/2;
}

int main(){
	int I, recordeAnterior, numeroDeDias, novoRecorde, duracaoTreino, distanciaTreino;
	while(scanf("%d", &numeroDeDias) != EOF){
		recordeAnterior = -1;
		for(I = 1; I <= numeroDeDias; I++){
			scanf("%d %d", &duracaoTreino, &distanciaTreino);
			novoRecorde = recorde(duracaoTreino, distanciaTreino);
			if (novoRecorde > recordeAnterior){
				recordeAnterior = novoRecorde;
				printf("%d\n", I);
			}	
		}
	}
	return 0;
}
