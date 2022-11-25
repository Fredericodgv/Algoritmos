#include <stdio.h>
#include <math.h>
#define N 5

void modifica(float mat[N][N])
{
    int aux, i, j;

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (i + j == 4 && i < j)
            {
                aux = ceil(mat[i][j]);
                mat[i][j] = (int)ceil(mat[j][i]);
                mat[j][i] = (int)aux;
            }
            else
                mat[i][j] = (int)ceil(mat[i][j]);
        }
    }
}

int main()
{
    float mat[N][N];
    int i, j, k = 0;

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            scanf("%f ", &mat[i][j]);
        }
    }

    modifica(mat);

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (i + j == 4)
            {
                if (mat[i][j] < 0)
                {
                    k = 1;
                }
            }
        }
    }

    if (k == 1)
    {
        return 0;
    }
    else
    {
        for (i = 0; i < N; i++)
        {
            for (j = 0; j < N; j++)
            {
                printf("%.f ", mat[i][j]);
            }
            printf("\n");
        }
    }

        return 0;
    }