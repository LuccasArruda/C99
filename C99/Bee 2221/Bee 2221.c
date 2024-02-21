#include <stdio.h>

struct Pokemon {
    int ataque;
    int defesa;
    int level;
};

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int B;
        scanf("%d", &B);

        struct Pokemon Dabriel, Guarte;
        scanf("%d %d %d", &Dabriel.ataque, &Dabriel.defesa, &Dabriel.level);
        scanf("%d %d %d", &Guarte.ataque, &Guarte.defesa, &Guarte.level);

        if (Dabriel.level % 2 == 0) {
            Dabriel.ataque += B;
        }
        if (Guarte.level % 2 == 0) {
            Guarte.ataque += B;
        }

        int danoDabriel = Dabriel.ataque - Guarte.defesa;
        int danoGuarte = Guarte.ataque - Dabriel.defesa;

        if (danoDabriel > danoGuarte) {
            printf("Dabriel\n");
        } else if (danoGuarte > danoDabriel) {
            printf("Guarte\n");
        } else {
            printf("Empate\n");
        }
    }

    return 0;
}

