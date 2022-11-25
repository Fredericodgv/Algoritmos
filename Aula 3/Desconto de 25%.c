#include <stdio.h>

int main()
{
    int valor;
    float desc = 0.75;

    printf("Insira o valor do produto:");
    scanf("%i", &valor);

    printf("Preco final: %f", valor * desc);

    return 0;

}