#include <stdio.h>

int main ()
{
    int x;
    int y;
    int soma;
    float divisao;

    printf("\nDigite a nota 1");
    scanf("%d",&x);

    printf("\nDigite a nota 2");
    scanf("%d",&y);

    soma = x + y;
    divisao = (float)soma/2;

    printf("\nResultado = %f", divisao);

    return 0;
}