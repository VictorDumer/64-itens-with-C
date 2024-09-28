#include <stdio.h>
int main()
{
    int limitex,limitey,i=0,soma=0;

    printf("Digite o valor do vetor de x:\n");
    scanf("%d",&limitex);

    printf("Digite o valor do vetor de y:\n");
    scanf("%d",&limitey);

    int A[limitex];
    int B[limitey];

    for (i=0;i<limitex;i++){
        printf("Digite o valor de x:\n");
        scanf("%d",&A[i]);
    }
    
    for (i=0;i<limitey;i++){
        printf("Digite o valor de y:\n");
        scanf("%d",&B[i]);
    }
   for(i=0;i<limitex && i<limitey;i++){
    soma+=A[i]*B[i];
   }

    printf("A soma das multiplicações é : %d\n",soma);
    
return (0);}