#include <stdio.h>

int pares(int INICIAL[], int PAR[], int elementos)
{
    int i;
    int cont = 0;

    for (i = elementos; i >= 0; i--)
    {
        if (INICIAL[i] % 2 == 0)
        {
            PAR[cont] = INICIAL[i];
            cont++;
        }
    }

    return cont;
}

int main()
{
    int vetorInicial[100], vetorPar[100];
    int cont, i, cont2;

    for (cont = 0; cont < 100; cont++)
    {
        scanf("%d", &vetorInicial[cont]);
        if(vetorInicial[cont] == -1)
            break;
    }

    printf("Foram lidos %d elementos.\n", cont);

    cont2 = pares(vetorInicial, vetorPar, cont);

    for(i = 0; i < cont2; i++)
    {
        printf("%d ",vetorPar[i]);
    }
}