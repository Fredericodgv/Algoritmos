#include <stdio.h>
#define LOCAIS 5
#define ITENS 12

typedef struct
{
    char nome[51];
    int qtd;
    int arrecadado[ITENS];
}pontoDeArrecadacao;

void produtosFaltantes(pontoDeArrecadacao local[], int item)
{
    int i;
    int soma = 0;
    int falta;

    for (i = 0; i < LOCAIS; i++)
    {
        if (local[i].arrecadado[item] < local[i].qtd)
        {
            falta = local[i].qtd - local[i].arrecadado[item];
            printf("Faltam %d unidades do produto %d no ponto %s\n", falta, item, local[i].nome);
        }
        else
        {
            soma += local[i].arrecadado[item] - local[i].qtd;
        }
    }
    printf("Item %d: %d unidades disponiveis para redistribuicao.\n", item, soma); 
}

int main()
{
    pontoDeArrecadacao local[LOCAIS];
    int item;
    int i, j;

    for (i = 0; i < LOCAIS; i++)
    {
        scanf("%[^\n]s", local[i].nome);
        getchar();
        scanf("%d", &local[i].qtd);
        for (j = 0; j < ITENS; j++)
        {
            scanf("%d", &local[i].arrecadado[j]);
        }
        getchar();
    }

    scanf("%d", &item);

    produtosFaltantes(local, item);
    
    return 0;
}