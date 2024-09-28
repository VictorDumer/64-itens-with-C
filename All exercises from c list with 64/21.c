#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");

    int a;

    printf("Digite um n�mero real:\n");
    scanf("%d", &a);

    if (a>0)
    {
        printf("Positivo");
    }else{
        printf("Negativo");
    }
    
    return (0);
}