#include <stdio.h>

int main()
{

    int i;
    float trigo = 1, ttrigo = 1;
    int n = 64;
    for (i = 1; n > i; i++)
    {
        trigo *= 2;
        ttrigo += trigo;
    }
    printf("%.0f unidades de quantidade de trigo\n", ttrigo);
    return (0);
}