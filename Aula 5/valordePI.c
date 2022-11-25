#include <stdio.h>
#include <stdlib.h>

void pi(int n)
{
    int i;
    float valor;
    valor = 1;

    if (n <= 0){return;}

    else
    {
        printf("%d ", 1);
        for (i = 1; i < n; i++)
        {
            {
                if (i % 2 != 0)
                {
                    valor = valor - (1.0 / (1 + (2 * i)));
                    printf("- 1/%.f ", 1.0 + (2 * i));
                }
                else
                {
                    valor = valor + (1.0 / (1 + (2 * i)));
                    printf("+ 1/%.f ", 1.0 + (2 * i));
                }
            }
        }
        printf("\n%f", valor * 4);
    }
}

int main()
{
    int n;
    printf("Escreva o valor de n:");
    scanf("%d", &n);
    pi(n);
}