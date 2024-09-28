#include<stdio.h>
int main (){

    int max=3,idade[max],i;
    char nome[max][100];

    for (i=1;i<max;i++){

        printf("Digite o nome do candidato(a)\n");
        scanf(" %s",nome[i]);

        printf("Digite a idade do candidato(a)\n");
        scanf("%d",&idade[i]);
    }
    for (i=1;i<max;i++){
        if (idade[i]<=20 && idade[i]>= 18 )
        {
            printf(" Candidata: %s\n",nome[i]);
        }
        
    }




    return (0);
}