#include <stdio.h>
int main()
{

    int n,i=2,l=3;
    do
    {
        printf("Digite seu número: ");
        scanf("%d", &n);

        if (n<0)
        {
            printf("Negativo.\n");
        }else{
            printf("Positivo.\n");
        }
        
        if (n % 2 == 0)
        {
            printf("Par.\n\n");
        }else {
            printf("Impar.\n\n");
        }

    } while (l > i);

    return (0);
}