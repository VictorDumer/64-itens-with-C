#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    // declaração das variáveis
    int a, b;

    printf("Digite um valor entre 0(zero) e 9(nove)\n");
    scanf("%d", &a);

    if (a >= 0 && a <= 9)
    {
        printf("Valor válido\n");
    }
    else
    {
        printf("Valor inválido\n");
    }

    return (0);
}