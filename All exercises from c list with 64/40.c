#include <stdio.h>

int main() {
    float i;
    char e;

    do {
        printf("Digite o índice de poluição medido: ");
        scanf("%f", &i);

        if (i >= 0.05 && i <= 0.25) {
            printf("Índice de poluição aceitável.\n");
        } else if (i > 0.25 && i < 0.30) {
            printf("Índice de poluição está alto, mas ainda aceitável.\n");
        } else if (i >= 0.30 && i < 0.40) {
            printf("Notificar: Indústrias do 1º grupo devem suspender atividades.\n");
        } else if (i >= 0.40 && i < 0.50) {
            printf("Notificar: Indústrias do 1º e 2º grupo devem suspender atividades.\n");
        } else if (i >= 0.50) {
            printf("Notificar: Todos os grupos devem paralisar atividades.\n");
        } else {
            printf("Índice de poluição inválido.\n");
        }

        printf("Deseja encerrar o programa? (S/N): ");
        scanf(" %c", &e);

    } while (e != 'S' && e != 's');

    return 0;
}
