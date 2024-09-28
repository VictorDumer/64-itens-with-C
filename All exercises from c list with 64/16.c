#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    // declaração das variáveis
    int a, b;

    printf("Digite um número:\n");
    scanf("%d", &a);

    printf("Digite outro número:\n");
    scanf("%d", &b);

    if (a > b)
    {
        printf("%d, é o maior número.\n", a);
    }
    else if (b > a)
    {
        printf("%d é o maior número.\n", b);
    }
    else
    {
        printf("Tanto %d, quanto %d são iguais\n.", a, b);
    }
    return (0);
}