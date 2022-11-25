#include <stdio.h>

int calculoAuxilio(int pessoas[], float renda[], float pagamento[], int num)
{
    int i, cont;

    for(i = 0; i < num; i++)
    {
        if(renda[i]/pessoas[i] < 1500.0)
        {
            if(pessoas[i] <= 4)
                {
                    pagamento[i] = 1200.0;
                    cont++;
                }
            else if (pessoas[i] > 4 && pessoas[i] <= 7)
                pagamento[i] = 1500.0;
            else    
                pagamento[i] = 1800.0;
        }
        else
            pagamento[i] = 0.0;
    }

    return cont;
}

int main()
{
    int pessoas[50];
    float renda[50], pagamento[50];
    int num, i, cont;

    scanf("%d", &num);

    for(i = 0; i < num; i++)
    {
        scanf("%d", &pessoas[i]);
        scanf("%f", &renda[i]);
    }

    cont = calculoAuxilio(pessoas, renda, pagamento, num);

    printf("Número de famílias que receberam o valor de até R$1200.00: %d\n", cont);
    for (i = 0; i < num; i++)
    {
        printf("pagamento: %.2f\n", pagamento[i]);
    }
    
    return 0;
}