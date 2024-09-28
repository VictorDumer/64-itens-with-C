#include <stdio.h>

int main() {
    int num, count = 0, sum = 0;

    do {
        printf("Digite um número ímpar entre 1 e 9: ");
        scanf("%d", &num);
        if (num <= 0 || num >= 10 || num % 2 == 0) {
            printf("Número inválido! ");
        }
    } while (num <= 0 || num >= 10 || num % 2 == 0);

    for (int i = num; count < 20; i += 2) {
        sum += i * i;
        count++;
    }

    printf("A soma dos quadrados dos 20 primeiros números ímpares a partir de %d é: %d\n", num, sum);

    return 0;
}