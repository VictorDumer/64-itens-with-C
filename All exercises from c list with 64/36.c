#include <stdio.h>
int main()
{

    int num, i, media, mediat;
    int maior = 0;
    int menor = 100000000;
    media = 1;
    mediat = 1;
    for (i = 0; i < 10; i++)
    {
        printf("Digite o número %d:", i + 1);
        scanf("%d", &num);

        media += num;
        if (menor > num)
        {
            menor = num;
        }
        if (maior < num)
        {
            maior = num;
        }
    }
    mediat = media / 10;
    printf("O maior número é:%d, o menor é:%d, e a media desses número é :%d", maior, menor, mediat);

    return (0);
}