#include <stdio.h>
#define TAM 5

typedef struct
{
    char nome[51];
    float preco;
    int unidades_vendidas[7];
} Est_loja;

int analise(Est_loja A, float expectativa)
{
    int i;
    int dias = 0;

    for (i = 0; i < 7; i++)
    {
        if ((float)A.preco * A.unidades_vendidas[i] >= expectativa)
        {
            dias++;
        }
    }

    return dias;
}

int main()
{
    Est_loja lojas[TAM];
    int i, j, dias[TAM];
    float meta;

    scanf("%f", &meta);
    getchar();
    for (i = 0; i < TAM; i++)
    {
        scanf("%[^\n]s", lojas[i].nome);
        getchar();
        scanf("%f", &lojas[i].preco);
        for (j = 0; j < 7; j++)
        {
            scanf("%d", &lojas[i].unidades_vendidas[j]);
        }
        getchar();
    }

    for (i = 0; i < TAM; i++)
    {
        dias[i] = analise(lojas[i], meta);
    }

    for (i = 0; i < TAM; i++)
    {
        if (dias[i] > 0)
        {
            printf("A loja %s superou ou igualou o valor esperado em ao menos 1 dia\n", lojas[i].nome);
        }
    }

    return 0;
}