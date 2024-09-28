#include<stdio.h>
#include<locale.h>

int main(){
    setlocale (LC_ALL,"");
    //declaração das variáveis
    int a, b, c;

    printf("Digite um número para ser trocado pelo outro:\n");
    scanf("%d", &a);

    printf("Digite um número para ser trocado pelo outro:\n");
    scanf("%d", &b);

    printf("Digite um número para ser trocado pelo outro:\n");
    scanf("%d", &c);

    if (a > b && b > c) {
        printf("%d, %d, %d\n", a,b,c);
    } else if (a > c && c > b) {
        printf("%d, %d, %d\n",a,c,b);
    } else if (b > a && a> c){
        printtf("%d,%d,%d\n",b,a,c)
    } else if (b > c && c >a) {
        printf("%d, %d, %d\n",b,c,a);
    } else if (c > a && a> b){
        printtf("%d,%d,%d\n",c,a,b)
    } else if (c > b && b > a) {
        printf("%d, %d, %d\n",c,b,a);
    } 
    return (0);
}