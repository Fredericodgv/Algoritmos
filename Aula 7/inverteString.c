#include <stdio.h>
#include <string.h>
#define TAM 50

int tamanho(char str[])
{
    int i, n = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        //if(str[i] == '\n')
           // continue;
        //else
            n++;
    }

    printf("%d", n);

    return n;
}

void inverte(char str[])
{
    int i, n, aux;

    n = tamanho(str);

    for (i = 0; i <= (n - 1); i++, n--)
    {
        aux = str[i];
        str[i] = str[n - 1];
        str[n - 1] = aux;
    }

}

int main() 
{
    char string[TAM];

    fgets(string, TAM, stdin);

    inverte(string);
    
    puts(string);
    
    return 0;
}