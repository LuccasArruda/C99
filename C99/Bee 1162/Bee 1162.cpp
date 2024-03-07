#include <stdio.h>

int trocasTotais = 0;

void bubbleSort(int *vetor, int tamanhoVetor){
	int aux, i, troca = 1;
	
	trocasTotais = 0;
	while(troca){
		troca = 0;
		for(i = 0; i < tamanhoVetor - 1; i++){
			if (vetor[i] > vetor[i+1]){
				aux = vetor[i];
				vetor[i] = vetor[i+1];
				vetor[i+1] = aux;	
				troca = 1;
				trocasTotais++;
			}
		}
		
	}
}

int main(){
	int casosDeTeste, quantidadeDeValores, j, i, vetor[10000];
	
	scanf("%d", &casosDeTeste);
	for(i = 0; i < casosDeTeste; i++){
		scanf("%d", &quantidadeDeValores);
		for(j = 0; j < quantidadeDeValores; j++){
			scanf("%d", &vetor[j]);
		}
		
		bubbleSort(vetor, 4);
		
		printf("Optimal train swapping takes %d swaps.\n", trocasTotais);
	}

}
