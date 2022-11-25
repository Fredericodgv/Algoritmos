#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 6

typedef struct
{
    char titulo[50];
    char autor[30];
    int cod;
    float preco;
} dados;

int comparaFrases(char strOrig[], char strBusc[])
{
    int i, j;

    for (i = 0; strOrig[i] != '\0' && strOrig[i + j] != '\0'; i++)
    {
        for (j = 0; strBusc[j] != '\0'; j++)
        {
            if (strOrig[i + j] != strBusc[j])
            {
                break;
            }
        }
        if (strBusc[j] == '\0')
            return 1;
    }
    return 0;
}

void leDados(dados liv[])
{
    int i;

    for (i = 0; i < N; i++)
    {
        scanf("%[^\n]s", liv[i].titulo);
        scanf("%*c");
        scanf("%[^\n]s", liv[i].autor);
        scanf("%d", &liv[i].cod);
        scanf("%f", &liv[i].preco);
        scanf("%*c");
    }
}

int main()
{
    dados livros[N];
    char busca[50];
    int i, aux = 10;

    leDados(livros);

    scanf("%[^\n]s", busca);

    for (i = 0; i < N && aux != 1; i++)
    {
        if (comparaFrases(livros[i].titulo, busca))
        {
            aux = i;
            break;
        }
    }

    if (aux == 10)
        printf("Livro não encontrado");
    else
    {
        printf("Título: %s\n", livros[aux].titulo);
        printf("Autor: %s\n", livros[aux].autor);
        printf("Código: %d\n", livros[aux].cod);
        printf("Preço: %f\n", livros[aux].preco);
    }

    return 0;
}