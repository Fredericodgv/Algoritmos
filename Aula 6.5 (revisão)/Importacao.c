#include <stdio.h>

void tempoDeEntrega(int dias)
{
    char pais;

    do
    {
        scanf("%c", &pais);

        if (pais == 'A')
        {
            printf("Tempo Adicional %d dias\n", 3);
            printf("Tempo Total %d dias\n\n", dias + 3);
        }
        else if (pais == 'E')
        {
            printf("Tempo Adicional %d dias\n", 5);
            printf("Tempo Total %d dias\n\n", dias + 5);
        }
        else if (pais == 'P')
        {
            printf("Tempo Adicional %d dias\n", 10);
            printf("Tempo Total %d dias\n\n", dias + 10);
        }
        else if (pais == 'C')
        {
            printf("Tempo Adicional %d dias\n", dias);
            printf("Tempo Total %d dias\n\n", dias * 2);
        }

    } while (pais != 'Z');
}

int main()
{
    int diasBase;

    scanf("%d", &diasBase);

    tempoDeEntrega(diasBase);

    return 0;
}