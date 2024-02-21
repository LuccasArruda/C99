#include <stdio.h>

float retornaValorGolpe(int ataque, int defesa, int levelTreinador, int bonus){
	if((levelTreinador % 2) != 0)
		bonus = 0;
	
	return ((ataque + defesa) / 2) + bonus;
}

typedef struct{
	int ataque, defesa, levelTreinador;
	float valorGolpe;
} Pokemon;

int main(){
	Pokemon Charizard, Squirtle;
	int batalhas, i, bonus;
	
	scanf("%d", &batalhas);
	for(i = 0; i < batalhas; i++){
		scanf("%d", &bonus);
		
		scanf("%d %d %d", &Charizard.ataque, &Charizard.defesa, &Charizard.levelTreinador);
		Charizard.valorGolpe = retornaValorGolpe(Charizard.ataque, Charizard.defesa, Charizard.levelTreinador, bonus);
		
		scanf("%d %d %d", &Squirtle.ataque, &Squirtle.defesa, &Squirtle.levelTreinador);
		Squirtle.valorGolpe = retornaValorGolpe(Squirtle.ataque, Squirtle.defesa, Squirtle.levelTreinador, bonus);
			
		if (Charizard.valorGolpe < Squirtle.valorGolpe){
			printf("Guarte\n");
		}
		else if(Charizard.valorGolpe > Squirtle.valorGolpe){
			printf("Dabriel\n");
		}
		else{
			printf("Empate\n");
		}
	}
	
}
