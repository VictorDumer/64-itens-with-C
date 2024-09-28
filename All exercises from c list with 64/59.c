#include <stdio.h>
#include <string.h>

int main()
{

    int i, quantidade;
    char frase[30];

    printf("Digite uma frase:\n");
    scanf("%s", frase);
    quantidade = strlen(frase);

    for (i = 0; i <= quantidade; i++)
    {
        switch (frase[i])
        {
        case 'A':

            printf("A\n");
            break;
        case 'a':
            printf("a\n");
            break;
        case 'E':
            printf("E\n");
            break;
        case 'e':
            printf("e\n");
            break;
        case 'I':
            printf("I\n");
            break;
        case 'i':
            printf("i\n");
            break;
        case 'O':
            printf("O\n");
            break;
        case 'o':
            printf("o\n");
            break;
        case 'U':
            printf("U\n");
            break;
        case 'u':
            printf("u\n");
            break;

        default:
            break;
        }
    }

    return (0);
}