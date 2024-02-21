#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);
    getchar(); 

    while (N--) {
        char linha[102];  
        fgets(linha, sizeof(linha), stdin);

        int tamanho = strlen(linha);
        int metade = tamanho / 2;
        
        for (int i = 0; i < metade; i++) {
            char temp = linha[i];
            linha[i] = linha[tamanho - i - 2];  
            linha[tamanho - i - 2] = temp;
        }

        printf("%s", linha);
    }

    return 0;
}

