#include <stdio.h>
int main()
{

    int num1, num2, op;
    char e;
    do
    {

        printf("1- Adição\n");

        printf("2- Subtração\n");

        printf("3- Multiplicação\n");

        printf("4- Divisão\n");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            printf("Digite um número:");
            scanf("%d", &num1);
            printf("Digite outro número:");
            scanf("%d", &num2);

            printf("Adição dos números:%d", num1 + num2);
            break;
        case 2:
            printf("Digite um número:");
            scanf("%d", &num1);
            printf("Digite outro número:");
            scanf("%d", &num2);

            printf("Subtração dos números:%d", num1 - num2);
            break;
        case 3:
            printf("Digite um número:");
            scanf("%d", &num1);
            printf("Digite outro número:");
            scanf("%d", &num2);

            printf("Multiplicação dos números:%d", num1 * num2);
            break;
        case 4:
            printf("Digite um número:");
            scanf("%d", &num1);
            printf("Digite outro número:");
            scanf("%d", &num2);

            printf("Divisão dos números: %d", num1 / num2);
            break;
        default:
            break;
        }

        printf("\nDeseja continuar ? (s/n):");
        scanf(" %c", &e);

        if (e == 'S' || e == 's')
        {
            e = 'S';
        }
        if (e == 'N' || e == 'n')
        {
            e = 'N';
        }

    } while (e == 'S');

    return (0);
}