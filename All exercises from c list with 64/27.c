#include <stdio.h>

int main()
{
    int resposta, num, r;
    printf("Digite seu número inteiro:\n");
    scanf("%d", &num);
    r = num;
    resposta = 1;

    for (; num >= 1; --num)
    {
        resposta *= num;
    }
    printf("O fatorial %d é: %d", r, resposta);
    return 0;
}