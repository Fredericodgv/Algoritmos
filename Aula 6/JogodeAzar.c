#include <stdio.h>

void resultado(int j1[], int j2[], int R[])
{

    for(int i = 0; i < 10; i++)
    {
        if((j1[i] + j2[i]) % 3 == 0)
        {
            R[0] += 1;
        }
        else if((j1[i] + j2[i]) % 3 == 1)
        {
            R[1] += 1;
        }
        else
        {
            R[2]++;
        }
    }
}

int main()
{
    int j1[10], j2[10];
    int i;
    int R[3] = {0,0,0};
    
    printf("Digite os valores do jogador 1:");
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &j1[i]);
    }

    printf("\nDigite os valores do jogador 2:");
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &j2[i]);
    }

    resultado(j1, j2, R);

    for(i = 0; i < 3; i++)
    {
        printf("%d  ", R[i]);
    }

    return 0;
}