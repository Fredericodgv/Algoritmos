#include <stdio.h>
#define TAM 10

int inter(int A[], int B[], int C[], int tam)
{
    int i, j, k, aux;
    k = 0;

    for (i = 0; i < tam; i++)
    {
        for (j = 0; j < tam; j++)
        {
            if (A[i] == B[j])
            {
                C[k] = A[i];
                k++;
            }
        }
    }

    for (i = 0; i < k; i++)
    {
        for (j = i+1; j < k; j++)
        {
            if (C[i] > C[j])
            {
                aux = C[i];
                C[i] = C[j];
                C[j] = aux;
            }
        }
    }
    return k;
}

void uniao(int A[], int B[], int C[], int tam)
{
    int i, j, aux;
    

    for (i = 0; i < tam; i++)
    {
        C[i] = A[i];
    }
    for (i = 0; i < tam; i++)
    {
        C[tam + i] = B[i];                 
    }

    for (i = 0; i < 2 * tam; i++)
    {
        for (j = i + 1; j < 2 * tam; j++)
        {
            if (C[i] > C[j])
            {
                aux = C[i];
                C[i] = C[j];
                C[j] = aux;
            }
        }
    }
}

int main()
{
    int v1[10], v2[10], vInter[10], vUniao[20];
    int i, k;

    //printf("\nvalores do vetor1:");
    for (i = 0; i < TAM; i++)
    {
        scanf("%d", &v1[i]);
    }
    //printf("\nvalores do vetor2:");
    for (i = 0; i < TAM; i++)
    {
        scanf("%d", &v2[i]);
    }

    k = inter(v1, v2, vInter, TAM);
    uniao(v1, v2, vUniao, TAM);

    printf("A intersecao dos dois conjuntos eh:\n");
    for (i = 0; i < k; i++)
    {
        printf("%d ", vInter[i]);
    }
    printf("\nA uniao dos dois conjuntos eh:\n");

    for (i = 0; i < 20; i++)
    {
        if(vUniao[i] != vUniao [i-1])
        printf("%d ", vUniao[i]);
    }
}