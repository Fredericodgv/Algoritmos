#include <stdio.h>

int mediaPontos(int mat[][4], float candidato[], int cand)
{
    int i, j, maior = 0;

    for (i = 0; i < cand; i++)
    {
        candidato[i] = 0;
    }

    for (i = 0; i < cand; i++)
    {
        for (j = 0; j < 4; j++)
        {
            candidato[i] += mat[i][j];
        }
        candidato[i] = (float)candidato[i] / 4;

        if (candidato[i] > candidato[maior])
        {
            maior = i;
        }
    }

    return maior;
}

int main()
{
    int mat[50][4];
    float canditado[50];
    int cand, maior;
    int i, j;

    scanf("%d", &cand);

    for (i = 0; i < cand; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d ", &mat[i][j]);
        }
    }

    maior = mediaPontos(mat, canditado, cand);

    printf("Primeiro colocado:\n");
    printf("Candidato numero %d, media: %.1f", maior, canditado[maior]);

    return 0;
}