#include <stdio.h>

int main(){
	int I, J, LinhaDaMatriz, SomaValores;
	char Operacao;
	double Resultado, Valores[12][12];
	
	scanf("%d", &LinhaDaMatriz);
	scanf(" %c", &Operacao);
	
	SomaValores = 0;
	for(I = 0; I < 12; I++){
		for(J = 0; J < 12; J++){
			scanf("%lf", &Valores[I][J]);
			if(I == LinhaDaMatriz){
				SomaValores += Valores[LinhaDaMatriz][J];
			}
		}
	}
	
	if(Operacao == 'M')
		Resultado = SomaValores/12;
	else
		Resultado = SomaValores;
	
	printf("%.1lf\n", Resultado);	
	
	
	return 0;
}
