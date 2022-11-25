#include <stdio.h>

void PREENCHER1(int ORIGEM[], int DESTINO[], int VAL)
{
    for (int i = 0; i < 15; i++)
    {
        if (14 - i > VAL)
        {
            DESTINO[14 - i] = ORIGEM[i];
        }
        else
        {
            DESTINO[14 - i] = ORIGEM[i] + VAL;
        }
    }
}

int main()
{
    int DESTINO[15], ORIGEM[15], VAL;
    int i = 0;

    for (int i = 0; i < 15; i++)
    {
        ORIGEM[i] = i;
    }

    printf("Digite um valor entre 0 e 14:");
    scanf("%d", &VAL);
    
    PREENCHER1(ORIGEM, DESTINO, VAL);
    //PREENCHER2(ORIGEM, DESTINO, VAL);  

    for(i = 0; i < 15; i++)
    {
        printf("%d ",DESTINO[i]);
    }
}



void PREENCHER2(int ORIGEM[], int DESTINO[], int VAL)
{
    int i;

    for (i = 0; 14 - i > VAL; i++)
    {
        DESTINO[14 - i] = ORIGEM[i];
    }
    for (int j = i; j < 15; j++)
    {
        DESTINO[14 - j] = ORIGEM[j] + VAL;
    }
}