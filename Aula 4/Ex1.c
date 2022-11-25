#include <stdio.h>

void imprimeDivisaoInteira(int x, int y)
{
    if(y != 0)
        printf("Divisao inteira: %d", x/y);
    else
        printf("Divisao por 0 invalida");
}

int imprimeDivisaoReal(int x, int y)
{
    if(y != 0)
        printf("\nDivisao real: %f", (float)x/y);
    else
        printf("\nDivisao por 0 invalida");
}

int main()
{
    int a, b;
    printf("Digite seu dividendo:");
    scanf("%d", &a);
    printf("\nDigite seu divisor:");
    scanf("%d", &b);

    imprimeDivisaoInteira(a, b);
    imprimeDivisaoReal(a, b);
}