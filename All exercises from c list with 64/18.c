#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    // declaraÃ§Ã£o das variÃ¡veis
    int a;

    printf("Digite o código\n");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("um\n");
        break;

    case 2:
        printf("dois\n");
        break;

    case 3:
        printf("três\n");
        break;

    default:
        printf("Valor invalido");
    }

    return (0);
}