#include <stdio.h>
int main()
{

    int num1, n, i;
    int maior = -1;
    int menor = 10;

    do
    {

        printf("Digite quantos números deseja:\n");
        scanf("%d", &n);

        if (n == 0)
        {
            break;
        }

        for (i = 0; i < n; i++)
        {
            printf("Digite o %d número:\n", i + 1);
            scanf("%d", &num1);

            if (num1 == 0)
            {
                break;
            }

            if (maior < num1)
            {
                maior = num1;
            }
            if (menor > num1)
            {
                menor = num1;
            }
        }

        if (num1 != 0)
        {
            printf(" O maior número é :%d\n O menor número é :%d\n", maior, menor);
        }
        else
        {
            break;
        }
    } while (n != 0);

    return (0);
}