#include<stdio.h>
#include<locale.h>
int main(){
    setlocale (LC_ALL,"");
    //declaraÃ§Ã£o das variÃ¡veis
       //indenticador %d ou %i
    int i;
    
    printf("Digite sua idade:\n ");
    scanf("%d", &i);

    printf("a sua idade em dias � de:%d dias\n ",i*365);

    return (0);
}