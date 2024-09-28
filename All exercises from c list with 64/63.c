#include <stdio.h>
#include <string.h>
char* VERIFICA(int N)
{

    if (N % 2 == 0)
    {
        return "Par";
    }
    else
    {
        return "Impar";
    }
}
int LER()
{
    int n;
    scanf("%d",&n);
    return n;
}
int main()
{
    int numero;
    char* VER;
    printf("Digite um número:");
    numero = LER();

    VER = VERIFICA(numero);
    fflush (stdin);
    printf("Seu número é : %s\n", VER);

    return 0;
}
