#include <stdio.h>
int main (){

    int senha=61,n,conta=0,i;

    do
    {
        printf("Digite um número para tentar acertar o número de 0 a 100:\n");
        scanf("%d",&n);

        if (n==senha)
        {
            printf("Acertou\n");
        }
        if (n<senha)
        {
            printf("O número é maior que %d \n",n);
            conta+=1;
        }
        if (n>senha)
        {
            printf("O numero é menor que %d \n",n);
            conta+=1;
        }
        
    }
     while (n!=senha);
    
   printf("Você teve um total de %d erros, até acertar\n",conta);  
        

    return(0);
}