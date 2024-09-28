#include <stdio.h>
int main (){

    int max,numero,i,maior=0;
    float media,soma=0;

    printf("Digite a quantidade de numeros do vetor:");
    scanf("%d",&max);

    for (i=0;i<max;i++){
        printf("Digite um número:\n");
        scanf("%d",&numero);

        if (numero>0)
        {
            soma+=numero;
        }
        if (maior<numero)
        {
            maior=numero;
        }
    }
        media=soma/max;
        printf("A média dos números positvos é: %.2f \n e o maior número é %d ",media, maior );


    return (0);
}