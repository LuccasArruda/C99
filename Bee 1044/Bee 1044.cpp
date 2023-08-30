#include <stdio.h>
#include <math.h>

int main(){
	int A, B, Resto;
	scanf("%d", &A);
	scanf("%d", &B);
    if (A<B){
        Resto = B % A; 
    }
    else
    {
        Resto = A % B;
    }
	if (Resto == 0)
		printf("Sao Multiplos\n");
	else
		printf("Nao sao Multiplos\n");
	return 0;
}
