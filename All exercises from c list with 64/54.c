#include <stdio.h>
int main(){

    int A[5],B[8],i;
    
    for (i=0;i<5;i++){
    
    printf("Digite o %d vetor de a:\n",i);
    scanf("%d",&A[i]);
    
    }

    for (i=0;i<8;i++){
    
    printf("Digite o %d vetor de b:\n",i);
    scanf("%d",&B[i]);
    
    }

    for ( i = 0; i <8; i++)
    {
        if (A[0]==B[i])
        {
            printf("Os números %d são iguais\n",B[i]);
        }
        if (A[1]==B[i])
        {
            printf("Os números %d são iguais\n",B[i]);
        }
        if (A[2]==B[i])
        {
            printf("Os números %d são iguais\n",B[i]);
        }
        if (A[3]==B[i])
        {
            printf("Os números %d são iguais\n",B[i]);
        }
        if (A[4]==B[i])
        {
            printf("Os números %d são iguais\n9",B[i]);
        }
        if (A[5]==B[i])
        {
            printf("Os números %d são iguais\n9",B[i]);
        }
        
    }
    


    return(0);
}