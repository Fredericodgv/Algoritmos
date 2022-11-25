#include <stdio.h>
#define TAM 100

int destacar(char str[])
{
    int i, aux, alter = 0;
    int pontos = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '.')
        {
            if (pontos == 0)
            {
                pontos++;
                aux = i + 1;
            }
        }
    }

    if (pontos == 0)
    {
        return -1;
    }
    else
    {
        for (i = aux; str[i] != '.' && str[i] != '\0'; i++)
        {

            if (str[i] >= 'a' && str[i] <= 'z')
            {

                str[i] = str[i] - 'a' + 'A';
                alter++;
            }
        }
    }

    return alter;
}

int main()
{
    char frase[TAM], alteracoes;

    scanf("%[^\n]s", frase);

    alteracoes = destacar(frase);

    if (alteracoes == -1)
    {
        printf("Nao foi encontrado ponto final");
    }
    else
    {
        printf("Foram realizadas %d alteracoes\n", alteracoes);
        puts(frase);
    }

    return 0;
}