#include <stdio.h>
int main()
{

    int op, n, n2;
    printf("1-  Verificar se um dos números lidos é ou não múltiplo do outro\n");
    printf("2 - Verificar se os dois números lidos são pares\n");
    printf("3 - Verificar se a média dos dois números é maior ou igual a 7\n");
    printf("4 - Sair\n");
    printf(" ");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        printf("Digite um número;");
        scanf("%d", &n);
        printf("Digite outro número;");
        scanf("%d", &n2);

        if (n / n2 == 0 || n2 / n == 0)
        {
            printf("Multiplo");
        }
        else
        {
            printf("Não Multiplo");
        }
        break;
    case 2:
        printf("Digite um número;");
        scanf("%d", &n);
        printf("Digite outro número;");
        scanf("%d", &n2);

        if (n % 2 == 0 && n2 % 2 == 0)
        {
            printf("Ambos são pares");
        }
        else
        {
            printf("Um dos dois ou ambos não são pares");
        }
        break;
    case 3:
        printf("Digite um número;");
        scanf("%d", &n);
        printf("Digite outro número;");
        scanf("%d", &n2);

        if ((n + n2) / 2 >= 7)
        {
            printf("Média de:%d", (n + n2) / 2);
        }
        else
        {
            printf("Média menor que 7");
        }
        break;
    case (4):
        printf("Você saiu do programa!");
        break;

    default:
        printf("Digite um dos números acima!");
        break;
    }
}