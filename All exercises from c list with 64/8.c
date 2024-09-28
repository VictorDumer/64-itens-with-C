#include<stdio.h>
#include<locale.h>
int main(){
    setlocale (LC_ALL,"");
    //declaraÃ§Ã£o das variÃ¡veis
       //indenticador %d ou %i
    float r,a;
    
    printf("Digite a altura da lata de óleo:\n ");
    scanf("%f", &a);

    printf("Digite o raio da lata de óleo:\n ");
    scanf("%f", &r);

    printf("O volume da lata de óleo é de: %f", (3.14*(r*r)*a ));

    return (0);
}