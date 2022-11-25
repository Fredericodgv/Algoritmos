#include <stdio.h>
#define TAM 500

int consertaLetra(char letra[]) //Função para consertar a letra da música conforme solicitado
{
    int i;
    int modificados = 0;
    int mudar = 0;

    for (i = 0; letra[i] != '\0'; i++)
    {
        if (mudar == 1 && (letra[i] >= 'A' && letra[i] <= 'Z'))
        {
            letra[i] = letra[i] - 'A' + 'a';
            modificados++;
        }
        else if (letra[i] == '.')
        {
            mudar = 0;
        }
        else if (mudar == 0 && (letra[i] >= 'A' && letra[i] <= 'Z'))
        {
            mudar = 1;
        }
        else
        {
        }
    }

    return modificados;
}

int main()
{
    char letraMus[TAM];
    int modificados;

    scanf("%[^\n]s", letraMus);

    modificados = consertaLetra(letraMus);

    puts(letraMus);
    printf("Foram trocados %d caracteres.", modificados);

    return 0;
}