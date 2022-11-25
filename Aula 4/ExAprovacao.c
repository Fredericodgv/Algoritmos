//Desenvolva um algoritmo que leia duas notas de um aluno, um trabalho (todos os valores entre 0 e 10) e o número de aulas perdidas
//definindo e imprimindo se ele foi "aprovado", "reprovado" ou se fará "prova final". O aluno será "reprovado" se faltou mais de 15 aulas. 
//Será "aprovado" se não for "reprovado" por falta e sua média for maior que 6,0. Caso tenha média menor, deverá fazer "prova final". 
//O cálculo da média deve ser feito com peso 3 para a primeira prova, 5 para a segunda prova e 2 para o trabalho.



#include <stdio.h>
#include <stdlib.h>

int main()
{
    int faltas, prova1, prova2, trabalho, media;
    printf("Faltas:");
    scanf("%d", &faltas);
    printf("Nota da prova 1:");
    scanf("%d", &prova1);
    printf("Nota da prova 2:");
    scanf("%d", &prova2);
    printf("Nota do trabalho:");
    scanf("%d", &trabalho);

    media = (3 * prova1 + 5 * prova2 + 2 * trabalho) / 10;

    if(faltas > 15)
        printf("reprovado");
    else
    {
        if(media >= 6)
            printf("aprovado");
        else
            printf("prova final");
    }
}