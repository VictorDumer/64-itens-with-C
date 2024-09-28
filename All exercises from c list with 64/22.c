#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int a,b,resultado;

    printf("Digite um número real:\n");
    scanf("%d", &resultado);

    if (resultado>0){
    a=resultado;
    printf("resultado atribuido a A:%d\n\n",a);
    }else{
        b=resultado;
        printf("resultado atribuido a B:%d\n\n",b);
    }
    
    
    return (0);
}