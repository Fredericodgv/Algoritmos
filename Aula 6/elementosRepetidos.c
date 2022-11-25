#include <stdio.h>

int main()
{
    int tam;

    printf("Digite o tamanho do vetor:");
    scanf("%d", &tam);

    int vet[10];
    int pares[2];
    int c = 0;

    for(int i = 0; i < tam; i++)
    {
        printf("Digite o valor%d:", i + 1);
        scanf("%d", &vet[i]);
    }

    for(int i = 0; i < tam && c == 0; i++)
    {
        for(int j = 0; j < tam; j++)
        {
            if(vet[i] == vet[j] && j != i)
            {
                pares[0] = i;
                pares[1] = j;      
                c++;    
                break;
            }            
        }
    }
    
    if(c == 0)
    {
        printf("Nao ha elementos repetidos no vetor.");
    }

    else
    {
        printf("Par de elmentos repetidos:%d e %d", pares[0], pares[1]);
    }    

    return 0;
}