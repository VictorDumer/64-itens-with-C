#include<stdio.h>
#include<locale.h>

int main(){
    setlocale (LC_ALL,"");
    //declaração das variáveis
    int a;

    printf("Digite um número para ser trocado pelo outro:\n");
    scanf("%d", &a);
    
    if (a>0)
        printf("%d",a)
        else
            printf("%d",  a * (-1))
    return (0);
}