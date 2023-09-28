#include <stdio.h>

int main(){
	int NotasValidas;
	double Nota, Media;
	
	while(NotasValidas < 2){
		scanf("%lf", &Nota);
		if (Nota >= 0 && Nota <= 10){
			Media += Nota;	
			NotasValidas++;
		}
		else{
			printf("nota invalida\n");
		}
	}
	
	Media = Media / 2;
	printf("media = %.2lf\n", Media);
	
	return 0;
}
