#include <stdio.h>
#include <math.h>
int LER()
{
    int n;
    scanf("%d", &n);
    return n;
}

int HIPO(int base, int altura)
{
    if (sqrt((base * base) + (altura * altura)) > 0)
    {
        return sqrt((base * base) + (altura * altura));
    }
    else
    {
        return 0;
    }
}
int AREA(int base, int altura)
{
    return (base * altura) / 2;
}
int main()
{
    int B, A, H, AR;
    printf("Digite a base:\n");
    B = LER();
    printf("Digite a altura:\n");
    A = LER();

    H = HIPO(B, A);
    AR = AREA(B, A);
    printf("A hipotenusa é :%d \n A Área é: %d", H, AR);
    return 0;
}