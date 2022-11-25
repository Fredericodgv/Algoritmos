#include <stdio.h>

int main()
{
    int nota;
    nota = 0;

    printf("Digite a nota do aluno:");
    scanf("%d", &nota);

    while (!(nota < 0 || nota > 100))
    {
        if(nota >=  60)
        {
            printf("Aprovado!\n");
        }
        else
        {
            printf("Reprovado!\n");
        }
        printf("Digite a nota do aluno:");
        scanf("%d", &nota);
    }
    return 0;
}