#include <stdio.h>
int main (){

    int Alunos,i,sete=0,cinco=0;
    float soma=0;

    printf("Digite a quantidade de alunos:\n");
    scanf("%d",&Alunos);

    float notas[Alunos];

    for (i=0;i<Alunos;i++){
        printf("Digite a nota do %do aluno \n",i+1);
        scanf("%f",&notas[i]);
        if (notas[i]>7)
        {
            sete++;
        }
        if (notas[i]<5)
        {
            cinco++;
        }
        soma+=notas[i];
        
    }
    
    if (cinco==Alunos)
    {
        printf("Não há nenhum aluno com nota acima de 5.\n");
    }else{
        printf("A média aritmética das notas é:%2.f\n",soma/Alunos);
        printf("Quantidade de alunos com nota acima de 7.0: %d\n",sete);
    }
    
    
    return(0);
}