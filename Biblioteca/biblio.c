#include "biblio.h"

int comparaFrases(char strOrig[], char strBusc[])
{
    int i, j;

    for (i = 0; strOrig[i] != '\0' && strOrig[i+j] != '\0'; i++)
    {
        for (j = 0; strBusc[j] != '\0'; j++)
        {
            if (strOrig[i+j] != strBusc[j])
            {
                break;
            }   
        }
        if (strBusc[j] == '\0')
            return 1;        
    }
    return 0; 
}

int tamanho(char str[])
{
    int i;
    for (i = 0; str[i] != '\0'; i++){}
    return i;
}

void tiraPulaLinha(char str[])
{
    int i;
    for (i = 0; str[i] != '\0'; i++){}
    str[i - 1] = '\0';  
}