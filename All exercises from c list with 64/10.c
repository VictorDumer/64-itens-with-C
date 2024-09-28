#include<stdio.h>
#include<locale.h>
int main(){
    setlocale (LC_ALL,"");
    //declaraÃ§Ã£o das variÃ¡veis
       //indenticador %d ou %i
    int a,b;
    
    printf("Digite um número:\n ");
    scanf("%d", &a);

    printf("Digite outro número:\n ");
    scanf("%d", &b);

    printf("%d = %d = %d\n\n", a,b,a==b);
    printf("%d <> %d = %d\n\n", a,b,a!=b);
    printf("%d > %d = %d\n\n", a,b,a>b);
    printf("%d < %d = %d\n\n", a,b,a<b);
    printf("%d >= %d = %d\n\n", a,b,a>=b);
    printf("%d <= %d = %d\n\n", a,b,a<=b);
    return (0);
}