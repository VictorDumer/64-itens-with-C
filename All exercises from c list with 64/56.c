#include <stdio.h>
int main (){

    int max=10,par[max],numero,multiplo[max],i;

    for (i=0;i<max;){
        printf("Digite um número:\n");
        scanf("%d",&numero);

        if (numero%2==0)
        {
            par[i]=numero;
            printf("%d é par\n",par[i]);
        }
        if (numero%5==0)
        {
            multiplo[i]=numero;
            printf("%d é multiplo de 5\n",multiplo[i]);
        }
    }
    return (0);
}