#include <stdio.h>
#include <stdlib.h>

void divisores(int n) //Calcula e imprime quais sao os divisores do valor n lido pela funcao main
{
    int i;

    for (i = 1; i <= n; i++)
    {
        if(n%i == 0)
        {
            printf("%d ", i);
        }
        else{}
    }
    
}

int main()
{
    int n;

    printf("Digite o valor n:");
    scanf("%d", &n);

    divisores(n);

    return 0;
}