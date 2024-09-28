#include <stdio.h>
#include <locale.h>

int main()
{

    int a, b, c;

    printf("Digite o valor de a:");
    scanf("%d",&a);

    if (a<=0){
        do
        {
            printf("Digite o valor de a:");
            scanf("%d",&a);
        } while (a<=0);
        
    }

    printf("Digite o valor de b:");
    scanf("%d",&b);

    if (b<=0){
        do
        {
            printf("Digite o valor de b:");
            scanf("%d",&b);
        } while (b<=0);
        
    }

    printf("Digite o valor de c:");
    scanf("%d",&c);

    if (c<=0){
        do
        {
            printf("Digite o valor de c:");
            scanf("%d",&c);
        } while (c<=0);
        
    }
    /* A*/
    if (a>b && b>c)
    {
        printf("%d , %d ",c*a,a/c);
    }
    if (a>c && c>b)
    {
        printf("%d , %d ",b*a,a/b);
    }
    /* B*/
    if (b>c && c>a)
    {
        printf("%d , %d",a*b,b/a);
    }
    if (b>a && a>c)
    {
        printf("%d , %d",c*b,b/c);
    }
    /* C*/    
    if (c>b && b>a)
    {
        printf("%d , %d",a*c,c/a);
    }
    if (c>a && a>b)
    {
        printf("%d , %d",b*c,c/b);
    }
    return (0);
}