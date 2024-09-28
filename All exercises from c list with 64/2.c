#include<stdio.h>
int main(){


    int ctDolar,Vdolar;

    printf("Digite a cotação do dolar:\n\n ");
    scanf("%d", &ctDolar);

    printf("Digite a quantidade de dolares:\n\n ");
    scanf("%d", &Vdolar);

    printf("O dolar em real e de: R$:%d \n\n", (ctDolar*Vdolar));

    return 0;
}