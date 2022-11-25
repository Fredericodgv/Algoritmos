#include <stdio.h>

void leitura(int A[], int tam)
{
    int j;

    for (int i = 0; i < tam; i++)
    {
        scanf("%d", &A[i]);
        for (j = 0; j < i; j++)
        {
            while (A[i] == A[j])
            {
                scanf("%d", &A[i]);
            }
        }
    }
}

void org(int O[], int tam)
{
    int aux[100];
    int i;
    int j = 0;

    for (i = 0; i < tam; i++)
    {
        if (O[i] % 2 == 0)
        {
            aux[j] = O[i];
            j++;
        }
    }
    for (i = 0; i < tam; i++)
    {
        if (O[i] % 2 == 1)
        {
            aux[j] = O[i];
            j++;
        }
    }

    for (i = 0; i < tam; i++) //Rescrever os valores do vetor auxiliar no vetor principal
    {
        for (j = 0; j < tam; j++)
        {
            {
                O[i] = aux[i];
            }
        }
    }
}

int main()
{
    int vet[100];
    int n;

    scanf("%d", &n);

    leitura(vet, n);

    printf("Impressao do vetor apos a leitura\n");
    for (int i = 0; i < n; i++)
    {
        printf("vet[%d] = %d\n", i, vet[i]);
    }

    org(vet, n);

    printf("Vetor apos a reorganizacao\n");
    for (int i = 0; i < n; i++)
    {
        printf("vet[%d] = %d\n", i, vet[i]);
    }

    return 0;
}