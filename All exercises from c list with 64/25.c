#include <stdio.h>

int main()
{

    int op, h;

    printf("1-Peso ideal masculino\n");
    printf("2-Peso ideal feminino\n");
    printf("");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        printf("Digite sua altura:");
        printf(" ");
        scanf("%d", &h);
        printf("Seu peso ideal é: %d kg\n", (h * 72) - 58);
        break;

    case 2:

    case 3:
        printf("Digite sua altura:");
        printf(" ");
        scanf("%d", &h);
        printf("Seu peso ideal é: %d kg\n", (62.1 * h) - 44.7);
        break;

    default:
        printf("Digite uma das opções acima!\n");
        break;
    }
    return (0);
}