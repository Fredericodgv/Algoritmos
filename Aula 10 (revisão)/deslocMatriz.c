#include <stdio.h>

void deslocar(int A[100][100], int B[100][100], int k, int n)
{
    int desl, i, j;

    desl = n;

    for (i = 0; i < k; i++)
    {
        for (j = 0; j < k; j++)
        {
            if (j - desl >= k)
            {
                B[i][j - desl - k] = A[i][j];
            }
            else if(j - desl < 0)
            {
               B[i][j - desl + k] = A[i][j]; 
            }
            else
            {
                B[i][j - desl] = A[i][j];
            }
        }
    }
}

int main()
{
    int original[100][100], deslocada[100][100];
    int k, desl, i, j;

    scanf("%d", &k);
    for (i = 0; i < k; i++)
    {
        for (j = 0; j < k; j++)
        {
            scanf("%d", &original[i][j]);
        }
    }
    scanf("%d", &desl);

    deslocar(original, deslocada, k, desl);

    for (i = 0; i < k; i++)
    {
        for (j = 0; j < k; j++)
        {
            printf("%d ", deslocada[i][j]);
        }
        printf("\n");
    }

    return 0;
}