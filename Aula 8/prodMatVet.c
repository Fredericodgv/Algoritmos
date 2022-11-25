#include <stdio.h>
#include <stdlib.h>
#define M 5
#define N 5

void produto(float A[M][N], float V[M], float R[M])
{
    int i, j;

    for (i = 0; i < M; i++)
        R[i] = 0; 

    for (i = 0; i < M; i++)
        for (j = 0; j < N; j++)
            R[i] += A[i][j] * V[j];
}

int main()
{
    float matriz[M][N], vetor[M], resultado[M];
    int i, j;

    for (i = 0; i < M; i++)
        for (j = 0; j < N; j++)
            scanf("%f", &matriz[i][j]);

    for (i = 0; i < M; i++)
        scanf("%f", &vetor[i]);
    
    produto(matriz, vetor, resultado);

    for (i = 0; i < M; i++)
            printf("%.2f\n", resultado[i]);

    return 0;   
}