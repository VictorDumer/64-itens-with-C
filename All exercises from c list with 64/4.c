#include<stdio.h>
int main(){

    float A,B,C,D;
    char nome;

    
    printf("Digite o numero 1:\n\n ");
    scanf("%f", &A);

    printf("Digite o numero 2:\n\n");
    scanf("%f", &B);

    printf("Digite o numero 3:\n\n ");
    scanf("%f", &C);

    printf("Digite o numero 4:\n\n");
    scanf("%f", &D);

    printf("Adicao:\n\n");
    
    printf("%f + %f = %f\n",A,B,A+B);
    printf("%f + %f = %f\n",A,C,A+C);
    printf("%f + %f = %f\n",A,D,A+D);
    printf("%f + %f = %f\n",B,C,B+C);
    printf("%f + %f = %f\n",B,D,B+D);
    printf("%f + %f = %f\n",C,D,C+D);
    
    printf("Multiplicação:\n\n");

    printf("%f * %f = %f\n",A,B,A*B);
    printf("%f * %f = %f\n",A,C,A*C);
    printf("%f * %f = %f\n",A,D,A*D);
    printf("%f * %f = %f\n",B,C,B*C);
    printf("%f * %f = %f\n",B,D,B*D);
    printf("%f * %f = %f\n",C,D,C*D);
    
    return 0;
}