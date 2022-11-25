#include <stdio.h>
#define ALUNOS 30

void notaMinima(int vet1[], int vet2[], int vet3[], int tam)
{
    int i = 0;

    for(i = 0; i < tam; i++)
    {
        vet3[i] = (540 - 2*vet1[i] - 3*vet2[i])/4; 
    }

    for(i = 0; i < tam; i++)
    {
        printf("Nota necessaria para o aluno %d: %d\n", i + 1,vet3[i]);
    }
}

int main()
{
    int avaliacao1[ALUNOS], avaliacao2[ALUNOS], avaliacao3[ALUNOS];
    int i;

    printf("Notas avaliacao 1:\n");
    for (i = 0; i < ALUNOS; i++)
    {
        scanf("%d", &avaliacao1[i]);
    }

    printf("Notas avaliacao 2:\n");
    for (i = 0; i < ALUNOS; i++)
    {
        scanf("%d", &avaliacao2[i]);
    }

    notaMinima(avaliacao1, avaliacao2, avaliacao3, ALUNOS);

    return 0;
}