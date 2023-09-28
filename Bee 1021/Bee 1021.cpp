#include <stdio.h>
#include <math.h>

int main () {
  int I, QtdMoedas, Notas[6] = {100,50,20,10,5,2}, Resultado, QtdNotas;
  double Valor, Moedas[5] = {1.0,0.50,0.25,0.10,0.05};
  scanf ("%lf", &Valor);
  printf("valor %lf\n", Valor);
  
  printf ("NOTAS:\n");
  for (I = 0; I < 6; I++)
    {
      QtdNotas = (int) Valor / Notas[I];
      Valor = Valor - QtdNotas * Notas[I];
      printf ("%d nota(s) de R$%d.00\n", QtdNotas, Notas[I]);
      printf("valor %lf\n", Valor);
    };
  printf("MOEDAS:\n");
	for (I = 0; I < 6; I++){
		QtdMoedas = Valor / Moedas[I];
		Valor = fmod(Valor, Moedas[I]);
		if (Valor < 0.05){
			QtdMoedas = Valor / 0.01;
			printf("%d\n", QtdMoedas);
		}
		printf ("%d moeda(s) de R$%.2lf\n", QtdMoedas, Moedas[I]);
		printf("valor %lf\n", Valor);
	}
	

  return 0;
}
