#include <stdio.h>
int main()
{
    int numero=0,vetor[10],i=0,x,menor=0,maior=0,igual=0;

    for ( i= 0; i < 10; i++)
    {
        printf("Digite um n�mero inteiro positivo:\n");
        scanf("%d",&vetor[i]);
    }
    printf("\n\nDigite seu n�mero x:\n");
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
        printf("%d n�mero(s) s�o igual\n %d numero(s) s�o maiores\n %d numero(s) s�o menores",igual,maior,menor);
    
return (0);}