#include <stdio.h>

int main(){
	int i, entrada, linha;
	scanf("%d", &entrada);
	     //controle  //condicao   //incremento
	for (i=0, linha=1; i<entrada; i++, linha+=4){
		printf("%d %d %d PUM\n", linha, linha+1, linha+2);
	}
	return 0;
}
