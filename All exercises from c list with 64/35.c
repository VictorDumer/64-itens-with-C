#include <stdio.h>
int main()
{

    int i = 1;

    while (i < 100)
    {
        
        if (i % 10 == 0)
        {
            printf("Multiplo de 10! %d\n", i);
        }
        else
        {
            printf("%d\n", i);
        }
        i++;
    }

    return (0);
}