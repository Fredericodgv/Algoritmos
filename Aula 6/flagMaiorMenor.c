#include <stdio.h>
#define MAX 1000

void lerInteiros(int flag)
{
    int valor[MAX];
    int maior, menor;
    int i = 0;
    int j;

    scanf("%d", &valor[i]);
    while (valor[i] != flag && i < MAX)
    {
        i++;
        scanf("%d", &valor[i]);
    }

    maior = valor[0];
    menor = valor[0];

    for (j = 0; j < i; j++)
    {
        if (valor[j] > maior)
        {
            maior = valor[j];
        }
        if (valor[j] < menor)
        {
            menor = valor[j];
        }
    }

    printf("O maior valor lido foi o %d\n", maior);
    printf("O menor valor lido foi o %d", menor);
}

int main()
{
    int valor;

    printf("Digite seu valor flag:");
    scanf("%d", &valor);

    lerInteiros(valor);

    return 0;
}