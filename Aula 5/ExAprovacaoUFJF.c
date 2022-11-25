#include <stdio.h>
#include <stdlib.h>

void aprovacao(int nota, int faltas, int tarefas)
{
    if(tarefas >= 30 && faltas <= 15)
    {
        if(nota >= 60)
        {
            printf("Aprovado\n");
        }
        else
        {
           printf("O aluno tem direito de fazer a prova substitutiva\n");
        }
    }
    else
    {
        printf("Reprovado\n");
    }
}

int main()
{
    int alunos, nota, faltas, tarefas, i;
    printf("Digite o numero de alunos:");
    scanf("%d", &alunos);

    i = 0;
    while (i < alunos)
    {
        printf("Digite a nota final:");
        scanf("%d", &nota);
        printf("Digite o numero de faltas:");
        scanf("%d", &faltas);
        printf("Digite o numero de tarefas realizadas:");
        scanf("%d", &tarefas);
        aprovacao(nota, faltas, tarefas);
        i++;
    }
}