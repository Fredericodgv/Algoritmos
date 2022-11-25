#include <stdlib.h>
#include <stdlib.h>

int main()
{
    int faltas, prova1, prova2, trabalho, media;
    printf("Faltas:");
    scanf("%d", &faltas);
    printf("Nota da prova 1:");
    scanf("%d", &prova1);
    printf("Nota da prova 2:");
    scanf("%d", &prova2);
    printf("Nota do trabalho:");
    scanf("%d", &trabalho);

    media = (3 * prova1 + 5 * prova2 + 2 * trabalho) / 10;

    if(faltas > 15)
        printf("reprovado");
    else
    {
        if(media >= 6)
            printf("aprovado");
        else
            printf("prova final");
    }