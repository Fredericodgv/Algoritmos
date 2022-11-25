#include <stdio.h>
#define N 50

int corrigeFrase(char modificada[], char original[])
{
    int i, carac = 0;

    for (i = 0; modificada[i] != '\0'; i++)
    {
        if (modificada[i] != original[i])
        {
            modificada[i] = original[i];
            carac++;
        }
    }

    return carac;    
}

int main()
{
    char modificada[N], original[N];
    int caracteres;

    scanf("%[^\n]s", modificada);
    getchar();
    scanf("%[^\n]s", original);

    caracteres = corrigeFrase(modificada, original);

    printf("String corrigida: %s\n", modificada);
    printf("Numero de caracteres corrigidos: %d", caracteres);

    return 0;
}