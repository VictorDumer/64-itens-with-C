#include <stdio.h>
#include <string.h> 
int main (){

    int V, i;

    printf("Digite o número do vetor:\n");
    scanf("%d",&V);

    int VE[V];
    
    for (i = 0; i < V; i++) {
        printf("Digite o elemento %d do vetor:\n", i + 1);
        scanf("%d", &VE[i]);
    }
    
    
    for (i = V-1; i >= 0; i--)
    {
        printf("%d\n", VE[i]);
    }



    return 0;
}