#include <stdio.h>

int main() {
    int horaAtual, minutoAtual, horaFinal, minutoFinal, tempoDeDescanso;

    while (1) {
        scanf("%d %d %d %d", &horaAtual, &minutoAtual, &horaFinal, &minutoFinal);

        if (horaAtual == 0 && minutoAtual == 0 && horaFinal == 0 && minutoFinal == 0) {
            break;  
        }

        tempoDeDescanso = 0;

        tempoDeDescanso = (horaFinal - horaAtual) * 60 + minutoFinal - minutoAtual;

        if (tempoDeDescanso < 0) {
            tempoDeDescanso += 1440;
        }

        printf("%d\n", tempoDeDescanso);
    }

    return 0;
}

