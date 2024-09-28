#include <stdio.h>
int main()
{

    int i = 0, tamanho1, tamanho2;

    printf("Digite o tamanho do vetor a:\n");
    scanf("%d", &tamanho1);

    printf("Digite o tamanho do vetor b:\n");
    scanf("%d", &tamanho2);

    int V1[tamanho1], V2[tamanho2], vetor[tamanho1 + tamanho2];
    
    for (i=0;i<tamanho1;i++){
        printf("Digite o valor do vetor a:\n");
        scanf("%d",V1[i]);
    }

    for (i=0;i<tamanho1;i++){
        printf("Digite o valor do vetor b:\n");
        scanf("%d",V2[i]);
    }

    
    return (0);
}