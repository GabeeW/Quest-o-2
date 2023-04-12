
#include <stdio.h>

int main() {
    int num, fib_prev = 0, fib_atual = 1, fib_prox;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    while (fib_atual <= num) {
        if (fib_atual == num) {
            printf("%d pertence a sequencia de Fibonacci.\n", num);
            return 0;
        }
        fib_prox = fib_prev + fib_atual;
        fib_prev = fib_atual;
        fib_atual = fib_prox;
    }

    printf("%d nao pertence a sequencia de Fibonacci.\n", num);
    return 0;
}
