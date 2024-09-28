#include <stdio.h>
int main()
{

    int i, a = 1;

    while (a < 2)
    {
        printf("Digite sua idade:");
        scanf(" %d", &i);

        if (i >= 1 && i <= 6)
        {
            printf("Não foi requestado essa idade.\n");
        }

        if (i >= 5 && i <= 7)
        {
            printf("- Infantil A = 5 a 7 anos\n");
        }
        if (i >= 8 && i <= 11)
        {
            printf("- Infantil B = 8 a 11 anos\n");
        }
        if (i >= 12 && i <= 13)
        {
            printf("Juvenil A = 12 a 13 anos\n");
        }
        if (i >= 14 && i <= 17)
        {
            printf("- Juvenil B = 14 a 17 anos\n");
        }
        if (i >= 18)
        {
            printf("- Adultos = Maiores de 18 anos\n");
        }
        if (i <= 0)
        {
            printf("Idade inexistente, devendo idade ? Duvido\n");
        }
    }

    return (0);
}