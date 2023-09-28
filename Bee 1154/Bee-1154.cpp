#include <stdio.h>

int main(){
	int Idade, QtdIdades = 0;
	float MediaIdade = 0;
	while(scanf("%d", &Idade) && Idade && Idade > 0){
			MediaIdade += Idade;
			QtdIdades++;
	};
	MediaIdade = MediaIdade / QtdIdades;
	printf("%.2f", MediaIdade);
}
