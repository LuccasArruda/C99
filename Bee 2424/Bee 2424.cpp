#include <stdio.h>

int main(){
	int X, Y;
	scanf("%d", &X);
	scanf("%d", &Y);
	
	if (((X >= 0)&&(X <= 432))&&((Y >= 0)&&(Y <= 468))){
		printf("dentro\n");
	}
	else
		printf("fora\n");
}
