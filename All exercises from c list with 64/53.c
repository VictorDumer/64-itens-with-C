#include <stdio.h>
int main(){

    int voltas,i,t=0,tempo,a,melhorv,j=1;
    
    printf("Digite a quantidade de voltas feitas:\n");
    scanf("%d",&voltas);
    
    int vm[voltas];
    
    for (i= 0; i < voltas; i++,j++)
    {

        printf("Digite o tempo da %d corrida\n",j);
        scanf("%d",&vm[i]);

        if (vm[i]<vm[i+1])
        {
            melhorv=vm[i];
            a=i;
        }
        t+=vm[i];
    }

    printf("Melhor tempo foi na volta %d, total de tempo:%d tempo médio das voltas:%d",a,melhorv,t/voltas);
    
    return(0);
}