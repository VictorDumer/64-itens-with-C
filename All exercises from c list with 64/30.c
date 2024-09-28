#include <stdio.h>
int main()
{

    int num, limite, outro;
    printf("Digite um número para saber sua tabuada:\n");
    scanf("%d", &num);
    printf("Digite até qual numéro deseja a sua tabuada:");
    scanf("%d", &limite);

    for (outro = 1; outro <= limite; outro++)
    {
        printf("%d * %d = %d\n", num, outro, num * outro);
    }

    return (0);
}