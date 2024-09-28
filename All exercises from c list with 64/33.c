#include <stdio.h>
int main()
{

    int a, i, ma;
    int nota, soma = 1;

    printf("Quantida de alunos:");
    scanf("%d", &a);

    for (i = 0; i < a; i++)
    {
        printf("Aluno %d\n", i + 1);
        printf("Nota:\n");
        scanf("%d", &nota);
        printf("Matricula:");
        scanf("%d", &ma);
        if (ma < 0)
        {
            break;
        }
    }
    if (ma > 0)
    {
        printf("A media dos %d aluno(os) foi de %d", i, soma / a);
    }
    else
    {
        printf("Digite uma matrícula válida\n");
    }

    return (0);
}