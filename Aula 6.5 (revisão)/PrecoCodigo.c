#include <stdio.h>

int precoTotal(int codigo, int quant)
{
    float valor;

    switch (codigo)
    {
    case 1 ... 10:
        valor = 10.0 * quant;
        break;
    case 11 ... 20:
        valor = 20.0 * quant;
        break;
    case 21 ... 30:
        valor = 30.0 * quant;
        break;
    case 31 ... 40:
        valor = 40.0 * quant;    
        break;
    default:
        break;
    }

    return valor;
}

int main()
{
    int codigo, quant;
    float valor;

    scanf("%d", &codigo);
    scanf("%d", &quant);

    valor = precoTotal(codigo, quant);

    printf("R$ %.2f", valor);

}