#include <stdio.h>

int main(){
	int CodigoFuncionario;
	float HorasTrabalhadas, SalarioPorHora, SalarioTotal;
	
	scanf("%d", &CodigoFuncionario);
	scanf("%f", &HorasTrabalhadas);
	scanf("%f", &SalarioPorHora);
	SalarioTotal = HorasTrabalhadas*SalarioPorHora;
	printf("NUMBER = %d\n", CodigoFuncionario);
	printf("SALARY = U$ %.2f\n", SalarioTotal);
		
	return 0;
}
