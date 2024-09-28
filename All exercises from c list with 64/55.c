#include <stdio.h>
#include <string.h>
int main()
{

    int i, espacos = 0;
    char frase[51];

    printf("Digite sua frase:");
    fgets(frase, 50, stdin);

    for (i = 0; i < 50; i++)
    {
        printf("Frase sem espaços: ");
        for (i = 0; i <50; i++)
        {
            if (frase[i] != ' ')
            {
                printf("%c", frase[i]);
            }
            else
            {
                espacos++; 
            }
        }
    }
      if (espacos==0)
      {
        printf("Sua frase não posui espasos");
    }else{

      printf("\nQuantidade de espaços em branco: %d\n", espacos);
    }
      
    return (0);
}