#include <stdio.h>

int main(){
	int LimiteSequencia, I;
	
	while (LimiteSequencia != 0){
		scanf("%d", &LimiteSequencia);
		for(I=1; I<=LimiteSequencia; I++){
			if (I==LimiteSequencia){
				printf("%d\n", I);
			}
			else{
				printf("%d ", I);	
			}
		}
	}
}
