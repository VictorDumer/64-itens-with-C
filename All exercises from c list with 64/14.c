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
        printf("A diferença entre %d, e %d é de: %d", a, b, a - b);
    }
    else
    {
        printf("A diferença entre %d, e %d é de: %d", b, a, b - a);
    }
    return (0);
}