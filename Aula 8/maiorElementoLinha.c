#include <stdio.h>

void maioresElementos(int mat[][100], int vet[], int N, int M)
{
    int i, j;
    int maior;

    for (i = 0; i < N; i++)
    {
        maior = 0;
        for (j = 0; j < M; j++)
            if (mat[i][j] > mat[i][maior])
                maior = j;
        vet[i] = maior;
    }
}

int main()
{
    int matriz[100][100], vetor[100];
    int N, M;
    int i, j;

    scanf("%d%d", &N, &M);

    for (i = 0; i < N; i++)
        for (j = 0; j < M; j++)
            scanf("%d", &matriz[i][j]);

    maioresElementos(matriz, vetor, N, M);

    for (i = 0; i < N; i++)
    {
        printf("%d ", vetor[i]);
    }

    return 0;
}