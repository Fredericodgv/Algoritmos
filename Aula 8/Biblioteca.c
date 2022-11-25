#include <stdio.h>

int emprestimosSemanas(int mat[100][100], int semanas, int turmas)
{
    int i, j, soma;
    int semanasInf = 0;

    for (j = 0; j < semanas; j++)
    {
        soma = 0;
        for (i = 0; i < turmas; i++)
        {
            soma += mat[i][j];
        }
        printf("Na semana %d foram emprestados %d livros\n", j, soma);
        
        if (soma < 50)
        {
            semanasInf ++;
        }   
    }

    printf("\n");

    return semanasInf;
}

int main()
{
    int mat[100][100];
    int i, j;
    int turmas, semanas;
    int semanasInf;

    scanf("%d", &turmas);
    scanf("%d", &semanas);
    
    
    for (i = 0; i < turmas; i++)
    {
        for (j = 0; j < semanas; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    semanasInf = emprestimosSemanas(mat, semanas, turmas);

    printf("A quantidade de semanas com o número de empréstimos inferior a 50 foi: %d", semanasInf);
    
    return 0;
}