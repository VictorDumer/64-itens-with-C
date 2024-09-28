#include<stdio.h>
int main(){

 
    int Cp,Qv; 
    float Pp;
    char nome;
    
    printf("Digite o codigo da peca:\n\n ");
    scanf("%d", &Cp);

    printf("Digite o preco unitario da peca:\n\n");
    scanf("%f", &Pp);

    printf("Digite a quantidade vendida:\n\n ");
    scanf("%d", &Qv);

    printf("Digite a inicial do vendedor:\n\n ");
    fflush(stdin);
    scanf("%c", &nome);
    
    printf("Parabens vendedor %c, sua comissao e de %.2f",nome , (0.05 * (Pp*Qv)) );

    return 0;
}