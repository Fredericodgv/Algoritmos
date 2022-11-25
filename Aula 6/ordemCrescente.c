#include <stdio.h>

int main()
{
    float v1[50], v2[50], v3[100];
    int N, a;
    int i;

    //printf("Digite o tamanho N do vetor:");
    scanf("%d", &N);

    //printf("\nvalores do vetor1:");
    for (i = 0; i < N; i++)
    {
        scanf("%f", &v1[i]);
    }
    //printf("\nvalores do vetor2:");
    for (i = 0; i < N; i++)
    {
        scanf("%f", &v2[i]);
    }

    for (i = 0; i < N; i++)
    {
        v3[i] = v1[i];
    }
    for (i = 0; i < N; i++)
    {
        v3[N + i] = v2[i];
    }

    int M = 2*N;

    for (i = 0; i < M; i++)
    {
        for (int j = i+1; j < M; j++)
        {
            if (v3[i] > v3[j])
            {
                a = v3[i];
                v3[i] = v3[j];
                v3[j] = a;
            }
        }
    }
    for(int i = 0; i < M; i++)
    {
        printf("\nv[%d] = %.2f\n",v3[i]);
    }
}