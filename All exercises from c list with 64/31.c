#include <stdio.h>

int main()
{
    int num;
    int soma_pares = 0;
    int soma_impares = 0;

    printf("Digite um número, negativo para encerrar o programa:\n");
    for (;;)
    {
        scanf("%d", &num);
        if (num < 0)
        {
            break;
        }
        if (num % 2 == 0)
        {
            printf("%d é par\n digite outro:", num);
            soma_pares += num;
        }
        else
        {
            printf("%d é impar\n digite outro:", num);
            soma_impares += num;
        }
    }
    printf("Soma Números Pares: %d\n", soma_pares);
    printf("Soma Números Impares: %d\n", soma_impares);

    return 0;
}