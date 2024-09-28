#include <stdio.h>
#include <string.h>
int LER(){
    int n;
    scanf("%d",&n);
    return (n);
}
int REAJUSTE( int a, int b){
    return (a*b);
}
int main(){
    int S,I,R;

    printf("Digite seu salário:\n");
    S=LER();
    
    printf("Digite o indice de reajuste:");
    I=LER();
    
    R=REAJUSTE(S,I);

    printf("O valor do reajuste é:%d", R);
    return (0);
}