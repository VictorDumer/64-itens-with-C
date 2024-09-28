#include <stdio.h>
int main()
{

    int op;
    float c,peso;
    char escolha;

    do
    {
        printf("1- Conversão de Graus Celsius em Graus Fahrenheit\n");
        printf("2- Conversão de Graus Fahrenheit em Graus Celsius\n");
        printf("3- Peso ideal do homem\n");
        printf("4- Peso ideal da mulher\n");
        printf(" ");
        scanf(" %d", &op);
        switch (op)
        {
        case 1:
            printf("Digite a quantidade de graus:\n");
            scanf(" %f", &c);
            c = (9 * c + 160) / 5;
            printf("%2.f", c);
            break;
        case 2:
            printf("Digite a quantidade de Fahrenheit:\n");
            scanf(" %f", &c);
            c = (c - 32) * 5 / 9;
            printf("%2.f", c);
            break;
        case 3:
            printf("Digite sua altura:");
            scanf(" %f", &c);
            printf("Peso ideal : %2.f kg \n", (72.7 * c) - 58);
            break;
        case 4:
            printf("Digite sua altura:");
            scanf(" %f", &c);
            printf("Peso ideal : %2.f \n", (62.1 * c) - 44.7);
            break;
        default:
            printf("Escolha uma das opções acima\n");
            break;
        }
        printf("Deseja continuar ? (s/n)");
        scanf(" %c", &escolha);

    } while (escolha == 'S' || escolha == 's');
    return (0);
}