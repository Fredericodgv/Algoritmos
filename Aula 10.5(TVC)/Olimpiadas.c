#include <stdio.h>
#define MAX 25

float diferencaMedalhas(int med[][6], int aum[], int M)
{
    int i, j;
    float media = 0;
    int modAumento = 0;

    for (i = 0; i < M; i++)
    {
        aum[i] = 0;
    }

    for (i = 0; i < M; i++)
    {
        for (j = 0; j < 3; j++)
        {
            aum[i] += med[i][j + 3] - med[i][j];
        }
    }

    for (i = 0; i < M; i++)
    {
        if (aum[i] > 0)
        {
            media += med[i][3] + med[i][4] + med[i][5];
            modAumento ++;
        } 
    }
    
    media /= modAumento;
    
    return media;
}

int main()
{
    int medalhas[MAX][6];
    int aumento[MAX];
    int i, j;
    int M;
    float media;

    scanf("%d", &M);

    for (i = 0; i < M; i++)
    {
        for (j = 0; j < 6; j++)
        {
            scanf("%d ", &medalhas[i][j]);
        }
    }

    media = diferencaMedalhas(medalhas, aumento, M);

    for (i = 0; i < M; i++)
    {
        if (aumento[i] > 0)
        {
            printf("Modalidade indice %d, aumento de %d medalhas\n", i, aumento[i]);
        }   
    }
    printf("Valor retornado pela funcao: %.2f", media);

    return 0;
}