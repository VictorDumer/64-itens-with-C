#include <stdio.h>
int main()
{
    int numero=0,vetor[10],i=0,x,menor=0,maior=0,igual=0;

    for ( i= 0; i < 10; i++)
    {
        printf("Digite um número inteiro positivo:\n");
        scanf("%d",&vetor[i]);
    }
    printf("\n\nDigite seu número x:\n");
    scanf("%d",&x);

    for(i=0;i<10;i++){
        if (vetor[i] == x)
        {
            igual+=1;
        }
        if (vetor[i] > x)
        {
            maior+=1;
        }
        if (vetor[i] < x)
        {
            menor+=1;
        }    
    }    
        printf("%d número(s) são igual\n %d numero(s) são maiores\n %d numero(s) são menores",igual,maior,menor);
    
return (0);}