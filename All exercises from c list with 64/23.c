#include <stdio.h>
int main()
{

    int op, v, v2;

    printf("1-Adição\n");
    printf("2-Subtração\n");
    printf("3-Multiplicação\n");
    printf("4-Divisão\n");
    printf("Escolha: ");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        printf("Digite um número\n");
        scanf("%d", &v);
        printf("Digite outro número\n");
        scanf("%d", &v2);
        printf("O resultado é: %d\n", v + v2);
        break;

    case 2:
        printf("Digite um número\n");
        scanf("%d", &v);
        printf("Digite outro número\n");
        scanf("%d", &v2);
        printf("O resultado é: %d\n", v - v2);
        break;

    case 3:
        printf("Digite um número\n");
        scanf("%d", &v);
        printf("Digite outro número\n");
        scanf("%d", &v2);
        printf("O resultado é: %d\n", v * v2);
        break;

    case 4:
        printf("Digite um número\n");
        scanf("%d", &v);
        printf("Digite outro número\n");
        scanf("%d", &v2);
        printf("O resultado é: %d\n", v / v2);
        break;

    default:
        printf("Digite um dos números acima.");
        break;
    }
    return (0);
}