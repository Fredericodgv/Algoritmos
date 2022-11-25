#include <stdio.h>

void valor(int min, int quant)
{
    float valor;

    if (quant >= min)
    {
        valor = 20.0 * quant;
        printf("Valor da entrega: R$ %.2f (%d Caixas)\n", valor, quant);
    }
    else
        printf("Pedido recusado.\n");
}

int main()
{
    int quantidade, minimo;

    scanf("%d", &minimo);

    scanf("%d", &quantidade);
    valor(minimo, quantidade);
    while (quantidade != 0)
    {
        scanf("%d", &quantidade);
        if(quantidade != 0)
            valor(minimo, quantidade);
    }

    return 0;
}