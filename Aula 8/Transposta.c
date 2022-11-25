#include <stdio.h>
#define TAM 3

void leituraMatriz(float mat[TAM][TAM])
{
    int i, j;

    for (i = 0; i < TAM; i++)
        for (j = 0; j < TAM; j++)
            scanf("%f", &mat[i][j]);

    
}

void transporMatriz(float mat[TAM][TAM], float transp[TAM][TAM])
{
    int i, j;
    
    for (i = 0; i < TAM; i++)
        for (j = 0; j < TAM; j++)
            transp[i][j] = mat[j][i];

}

int main()
{
    float matriz[TAM][TAM], transposta[TAM][TAM];
    int i, j;

    leituraMatriz(matriz);
    
    transporMatriz(matriz, transposta);

    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
            printf("%.1f ", transposta[i][j]);
        printf("\n");
    }
}