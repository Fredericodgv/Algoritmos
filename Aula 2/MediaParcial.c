#include <stdio.h>

int main()
{
    int valor;
    int contador = 0;
    int soma = 0;
    float media = 0;

    do
    {
        printf("\nDigite seu valor:");
        scanf("%d", &valor);
        contador++;
        soma = soma + valor;
        media = (float)soma/contador;
        printf("\nUltimo valor lido: %d", valor);
        printf("\nQuantidade: %d", contador);
        printf("\nMedia: %.2f", media); 
    } while (media > 0);

    return 0;    
}