#include <stdio.h>

int main() {
    int c, h;
    float s, e, t;
    char enc;

    do {
        printf("Digite o código do operário: ");
        scanf("%d", &c);

        printf("Digite o número de horas trabalhadas: ");
        scanf("%d", &h);

        if (h > 50) {
            s = 50 * 10.0; 
            e = (h - 50) * 20.0;
        } else {
            s = h * 10.0;
            e = 0; 
        }

     
        t = s + e;

     
        printf("Código do operário: %d\n", c);
        printf("Salário base: R$ %.2f\n", s);
        printf("Salário excedente: R$ %.2f\n", e);
        printf("Salário total: R$ %.2f\n", t);

       
        printf("Deseja encerrar o programa? (S/N): ");
        scanf(" %c", &enc);

    } while (enc != 'S' && enc != 's');

    return 0;
}
