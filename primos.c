#include <stdio.h>

// Função para verificar se um número é primo
int ehPrimo(int num) {
    if (num <= 1) return 0; // 0 e 1 não são primos
    if (num <= 3) return 1; // 2 e 3 são primos

    // Verifica se é divisível por qualquer número entre 2 e a raiz quadrada do número
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; // Se for divisível, não é primo
    }

    return 1; // Se não foi divisível, é primo
}

// Função para encontrar e imprimir os números primos de 1 até N
void encontrarPrimos(int N) {
    printf("Numeros primos de 1 ate %d:\n", N);
    for (int i = 2; i <= N; i++) {
        if (ehPrimo(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int N;
    printf("Digite um numero inteiro positivo N: ");
    scanf("%d", &N);

    encontrarPrimos(N);

    return 0;
}