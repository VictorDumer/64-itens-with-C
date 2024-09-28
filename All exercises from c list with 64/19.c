#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    // declaraÃ§Ã£o das variÃ¡veis
    int a, b, c;

    printf("Digite o número 1:\n");
    scanf("%d", &a);

    printf("Digite o número 2:\n");
    scanf("%d", &b);

    printf("Digite o número 3:\n");
    scanf("%d", &c);

    if (a<b+c && b<c+a && c<b+a)
    {
        if (a==b && b==c)
        {
            printf("Esse triangulo � equilatero");
        }else if (a==b||a==c||b==c)
        {
            printf("Esse triangulo � is�scile");
        }else{
            printf("Esse triangulo � escaleno");
        }
    }else{
        printf("Esses numeros n�o caractecrizam um triangulo");
    } 
    
    

    return (0);
}