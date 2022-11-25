#include <stdio.h>
void aprovacao(int min)
{
    int nota, cont;

    cont = 0;
    do
    {
        scanf("%d", &nota);
        if (nota >= min && nota <= 100)
        {
            cont++;
        }
    } while (nota <= 100 && nota >= 0);

    printf("Alunos aprovados: %d", cont);
}

int main()
{
    int notaMinima;

    scanf("%d", &notaMinima);
    aprovacao(notaMinima);

    return 0;
}