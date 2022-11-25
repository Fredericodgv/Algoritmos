#include <stdio.h>

void numeroPerfeito(int n)
{
    int qtd = 0;
    int num = 1;

    while (num > 0)
    {
        int soma = 0;
        for (int divisor = 1; divisor < num; divisor++)
        {
            if (num % divisor == 0)
            {
                soma = soma + divisor;
            }
        }
        if (num == soma)
        {
            qtd++;
        }

        if (qtd == n)
        {
            break;
        }
        num++;
    }

    printf("%d", num);
}

int main()
{
    int n;

    printf("Digite o valor n:");
    scanf("%d", &n);

    numeroPerfeito(n);

    return 0;
}