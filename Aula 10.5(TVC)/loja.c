#include <stdio.h>
#define FIL 5
#define PROD 10

typedef struct
{
    char nome[51];
    float preco[PROD];
} filial;

int reajuste(filial loja[], int j)
{
    int i;
    int maior10 = 0;

    for (i = 0; i < PROD; i++)
    {
        loja[j].preco[i] *= 1.05;

        if (loja[j].preco[i] > 10)
            maior10++;
    }

    printf("Precos reajustados na filial %s", loja[j].nome);
    for (i = 0; i < PROD; i++)
    {
        printf("Produto %d: R$ %.2f\n", i, loja[j].preco[i]);
    }

    return maior10;
}

int main()
{
    filial loja[FIL];
    int maior10, j;
    int i, k;

    for (i = 0; i < FIL; i++)
    {
        fgets(loja[i].nome, 51, stdin);
        for (k = 0; k < PROD; k++)
        {
            scanf("%f", &loja[i].preco[k]);
        }
        getchar();
    }
    
    scanf("%d", &j);

    maior10 = reajuste(loja, j);

    printf("%d produtos custam mais de R$ 10.00 na filial.", maior10);

    return 0;
}