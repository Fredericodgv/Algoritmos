#include <stdio.h>

int tamanho(char str[])
{
    int i;
    for (i = 0; str[i] != '\0'; i++){}
    return i;
}

void contaCaracteres(char s[])
{
    int i, tam;
    int vogais = 0, consoantes = 0, outros = 0;

    tam = tamanho(s);

    for (i = 0; i < tam; i++)
    {
        if ((s[i] <= 'z' && s[i] >= 'a') || (s[i] <= 'Z' && s[i] >= 'A'))
        {
            switch (s[i])
            {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                vogais++;
                break;

            default:
                consoantes++;
                break;
            }
        }
        else
        {
            outros++;
        }
    }

    printf("Total de caracteres digitados: %d\n", tam);
    printf("--> Vogais: %d.\n", vogais);
    printf("--> Consoantes: %d.\n", consoantes);
    printf("--> Outros: %d.\n", outros);
}

int main()
{
    char frase[50];
    int i;

    scanf("%[^\n]s", frase);


    contaCaracteres(frase);
    return 0;
}