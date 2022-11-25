#include <stdio.h>
#include <stdlib.h>
#define TAM 500

int tamanho(char str[])
{
    int i, n = 0;

    for (i = 0; str[i] != '\n'; i++)
    {
        if (str[i] == '\n')
            continue;
        else
            n += 1;
    }

    return n;
}

void copiaInv(char strA[], char strB[], int k)
{
    int i;
    int n;

    for (i = 0; i < TAM; i++)
    {
        strA[i] = '\0';
    }

    n = tamanho(strB);

    if (n < k)
        k = n;

    for (i = 0; k > 0; i++, k--)
    {
        strA[k - 1] = strB[i];
    }
}

int main()
{
    char stringA[TAM], stringB[TAM];
    int k;

    fgets(stringB, TAM, stdin);
    scanf("%d", &k);

    copiaInv(stringA, stringB, k);

    puts(stringA);

    return 0;
}