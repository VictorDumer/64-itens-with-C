#include<stdio.h>
#include<locale.h>

int main(){
    setlocale (LC_ALL,"");
    //declaração das variáveis
    int a, b, c;

    printf("Digite um número para ser trocado pelo outro:\n");
    scanf("%d", &c);

    printf("Digite outro número para ser trocado pelo outro:\n ");
    scanf("%d", &b);

    a = c;
    c = b;
    b = a;

    printf("Com os valores trocados\n %d e %d\n", c, b);

    return (0);
}