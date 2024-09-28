#include <stdio.h>
int main(){

    int n,maior,menor;
    maior=-100000;
    menor=100000;
    do
    {
        printf("Digite seu número:\n");
        scanf("%d",&n);
        if (maior<=n)
        {
            maior=n;
        }
        if (menor>=n){
            menor=n;
        }
        
    printf("O menor número é %d, e o maior número é %d\n",menor,maior);
    } while (n != 0);
    printf("Você saiu do programa.\n");
    return (0);
}