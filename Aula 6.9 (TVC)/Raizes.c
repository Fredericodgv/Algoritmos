#include <stdio.h>
#include <math.h>

float CalculaRaizes(float a, float b, float c)
{
    float x1, x2, delta, prod;

    delta = b * b - (4 * a * c);

    if (delta < 0)
    {
        return -1;
    }

    x1 = (-b + sqrt(delta)) / (2.0 * a);
    x2 = (-b - sqrt(delta)) / (2.0 * a);

    prod = x1 * x2;

    return prod;
}

int main()
{
    float a, b, c, produto;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    produto = CalculaRaizes(a, b, c);

    if (produto == -1)
    {
        printf("Produto indeterminado");
    }
    else
    {
        printf("Produto das raizes reais: %.4f", produto);
    }

    return 0;
}