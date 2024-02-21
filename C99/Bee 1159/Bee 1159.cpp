#include <stdio.h>

int main(){
	int contador;
	while (contador <= 100){
		contador += 2;
		printf("%d\n", contador);
		if (contador == 100){
			break;
		}
	}
}
