#include <stdio.h>

void valoraprazo(float x, int y)
{
    float res;
    res = x / y;
    printf("Valor da parcela a prazo: R$%.2f", res);
}

int main()
{
    float valor, valorparcelas;
    int parcelas;
    printf("Valor da compra: R$");
    scanf("%f", &valor);
    printf("Numero de parcelas: R$");
    scanf("%d", &parcelas);
    valoraprazo(valor, parcelas);
}