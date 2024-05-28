#include <stdio.h>

int main() {
    int N;
    printf("Digite um numero inteiro positivo N: ");
    scanf("%d", &N);

    printf("Numeros primos de 1 ate %d:\n", N);
    for (int i = 2; i <= N; i++) {
        int ehPrimo = 1;
        if (i <= 1) ehPrimo = 0; // 0 e 1 não são primos
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                ehPrimo = 0;
                break;
            }
        }
        if (ehPrimo) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}