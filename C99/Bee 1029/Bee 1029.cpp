#include <stdio.h>

int fibonacci(int n, int *numeroDeChamadas) {
    (*numeroDeChamadas)++;
    
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1, numeroDeChamadas) + fibonacci(n - 2, numeroDeChamadas);
}

int main() {
    int numeroDeCasos;
    scanf("%d", &numeroDeCasos);

    while (numeroDeCasos--) {
        int x, numeroDeChamadas = -1;
        scanf("%d", &x);

        int resultado = fibonacci(x, &numeroDeChamadas);
        printf("fib(%d) = %d calls = %d\n", x, numeroDeChamadas, resultado);
    }

    return 0;
}
