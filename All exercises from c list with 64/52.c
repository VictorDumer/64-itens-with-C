#include <stdio.h>
int main(){

    int v[100],numero[100],num,i;
    numero[1]=0;
    numero[3]=0;
    numero[4]=0;
    
    for (i=0;i<v;i++){
        printf("Digite um número positivo:\n");
        scanf("%d",&num);
        if (num==3)
        {
            numero[3]+=1;
        }
        if (num==1)
        {
            numero[1]+=1;
        }
        if (num==4)
        {
            numero[4]+=1;
        }
        if (num==-1)
        {
            break;
        }
    }
    printf("o número 1 foi digitado %d vezes\no número 3 foi digitado %d vezes\no número 4 foi digitado %d vezes\n",numero[1],numero[3],numero[4]);
    return(0);
    }