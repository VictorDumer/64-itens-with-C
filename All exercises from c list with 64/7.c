#include<stdio.h>
#include<locale.h>
int main(){
    setlocale (LC_ALL,"");
    //declaraÃ§Ã£o das variÃ¡veis
       //indenticador %d ou %i
    float C;
    
    printf("Digite a temperatura dos Fahrenheit:\n ");
    scanf("%f", &C);

    printf("\nA temperatura de Fahrenheit em Célcius é de:%f", ((C-32)*5/9));

    return (0);
}