#include <stdio.h>
#include <stdlib.h>
#define TAM 50

void imprimeSE(char str[])
{
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != ' ')
            printf("%c", str[i]);
    }
    
}

int main()
{
    char string[TAM];

    fgets(string, TAM, stdin);
    
    imprimeSE(string);
    
    return 0;
}