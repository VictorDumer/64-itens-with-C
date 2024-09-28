#include<stdio.h>
#include<locale.h>
int main(){
    setlocale (LC_ALL,"");
    //declaraÃ§Ã£o das variÃ¡veis
       //indenticador %d ou %i
    float C;
    
    printf("Digite a temperatura dos célcius:\n\n ");
    scanf("%f", &C);

    printf("A temperatura de Célcius em Fahrenheit é de:%f", ((9*C+160)/5));

    return (0);
}