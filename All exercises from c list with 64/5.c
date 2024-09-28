#include<stdio.h>
#include<locale.h>
int main(){
    setlocale (LC_ALL,"");
    //declaração das variáveis
       //indenticador %d ou %i
    float D,V,L,T,VM;
    
    printf("Informe a velocidade em km:\n\n ");
    scanf("%f", &V);

    printf("Digite o tempo gasto em horas:\n\n");
    scanf("%f", &T);

    D = (T * V);
    VM = (D / T);

    printf("Digite a quatidade de litros usados:\n\n ");
    scanf("%f", &L);

    L = (D / 12);

    printf("A velocidade m�dia foi de: %f Km/h, em %f horas, a distancia percorrida foi de %f, a quantidade de litros gastos foi de %f ",VM,T,D,L);
    return (0);
}