#include <stdio.h>

typedef struct
{
    char nome[51];
    int idade;
    int refigerantes[7];
}Paciente;

void refriSemana(Paciente dados, int k)
{
    int i, vezes = 0;

    for (i = 0; i < 7; i++)
    {
        if (dados.refigerantes[i] > k)
        {
            vezes += 1;
        }
    }

    printf("%s toma mais que %d refrigerantes %d vezes por semana", dados.nome, k, vezes);  
}

int main()
{
    int x, i;
    Paciente pacient;

    scanf("%[^\n]s", pacient.nome);
    scanf("%d", &pacient.idade);
    for (i = 0; i < 7; i++)
    {
        scanf("%d", &pacient.refigerantes[i]);
    }
    scanf("%d", &x);

    refriSemana(pacient, x);

    return 0;
}