#include <stdio.h>
#define TIMES 10

void saldoDeGols(int GolsFeitos[], int GolsSofridos[], int Saldo[])
{
    int i, j;
    int melhorSaldo = 0;
    int piorSaldo = 0;

    for (i = 0; i < TIMES; i++)
    {
        Saldo[i] = GolsFeitos[i] - GolsSofridos[i];
    }

    for (i = 0; i < TIMES; i++)
    {
        if (Saldo[i] > Saldo[melhorSaldo])
        {
            melhorSaldo = i;
        }
        else{}

        if (Saldo[i] < Saldo[piorSaldo])
        {
            piorSaldo = i;
        }
        else{}       
    }



    for (int i = 0; i < TIMES; i++)
    {
        printf("%d\n", Saldo[i]);
    }

    printf("%d\n", melhorSaldo + 1);
    printf("%d\n", piorSaldo + 1);
}

int main()
{
    int golsFeitos[TIMES], golsSofridos[TIMES], saldo[TIMES];
    int i;

    for (i = 0; i < TIMES; i++)
    {
        scanf("%d", &golsFeitos[i]);
    }
    for (i = 0; i < TIMES; i++)
    {
        scanf("%d", &golsSofridos[i]);
    }

    saldoDeGols(golsFeitos, golsSofridos, saldo);

    return 0;
}