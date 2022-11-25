#include <stdio.h>

int main()
{
    int maior;
    int menor;
    int valor;
    int i;
    
    printf ("Digite 10 valores inteiros: ");
    scanf ("%d", &valor);
    maior = valor;
    menor = valor;
    for (i = 1; i < 10; i++)
    {
        scanf ("%d", &valor);
        if (valor > maior)
            maior = valor;
        if (valor < menor)
            menor = valor;
    }
    
    printf ("Maior valor lido: %d\n", maior);
    printf ("Menor valor lido: %d\n", menor);
    return 0;
}
