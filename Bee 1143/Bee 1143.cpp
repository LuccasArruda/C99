#include <stdio.h>
#include <math.h>

int main(){
	int I, N, Quadrado, Cubo;
	
	scanf("%d", &N);
	for(I=1; I<=N; I++){
		Quadrado = I*I;
		Cubo = I*I*I;
		printf("%d %d %d\n", I, Quadrado, Cubo);
	}
}
