#include<stdio.h>
#include<locale.h>

int main(){
    setlocale (LC_ALL,"");
    //declaração das variáveis
    int notaa, notab, notac, notad, notas, notarec;

    printf("Digite a nota da primeira prova:\n");
    scanf("%d", &notaa);

    printf("Digite a nota da segunda prova:\n");
    scanf("%d", &notab);

    printf("Digite a nota da terceira prova:\n");
    scanf("%d", &notac);

    printf("Digite a nota da quarta prova:\n");
    scanf("%d", &notad);

    notas = (notaa + notab + notac + notad) / 4;

    if (notas < 7) {
        printf("Digite a nota de recuperação:\n");
        scanf("%d", &notarec);

        if ((notas + notarec) / 2 >= 7) {
            printf("Passou na recuperação!\n");
        } else {
            printf("Não passou na recuperação, média: %d\n", (notas + notarec) / 2);
        }
    } else if (notas > 7) {
        printf("Parabéns, sua nota foi: %d\n", notas);
    }

    return (0);
}