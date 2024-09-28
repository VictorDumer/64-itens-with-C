#include<stdio.h>
int main(){

  
    int qmax,qmin;


    printf("Digite a quantidade minima de pecas:\n\n ");
    scanf("%d", &qmin);

    printf("Digite a quantidade maximas de pecas:\n\n ");
    scanf("%d", &qmax);

    printf("A quantidade Media de pecas e de: %d \n\n", (qmin + qmax)/2);

    return 0;
}