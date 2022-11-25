#include <stdio.h>
#include <math.h>

int main()
{
    char p;
    float a;
    float a1;
    int v;
    int i;
    float r;

    printf("Escreva ""a"" para PA, ""g"" para PG crescente:");
    scanf("%c", &p); 

    printf("\nQual o primeiro termo da sua Progressao?");
    scanf("%f", &a);

    printf("\nQual a razao da sua Progressao?");
    scanf("%f", &r);

    printf("\nQuantos termos voce quer ver na sua Progressao?");
    scanf("%d", &i);

    a1 = a;

        if (p=='a')
        {
            for (v = 1; v < i; v++)
            {
            printf("%.2f, ", a);
            a = a + r;        
            }
        printf("%.2f.\nEsses foram os %d primeiros termos da sua PA.", a, v);

        printf("\n\nA soma dos termos da sua progressao: %.2f", ((a1 + a) * i)/2);
        }

        else if (p=='g')
        {
            for (v = 1; v < i; v++)
            {
            printf("%.2f, ", a);
            a = a * r;        
            }
        printf("%.2f.\nEsses foram os %d primeiros termos da sua PG.", a, v);

        printf("\n\nA soma dos termos da sua progressao: %.2f", ((a1 * (pow(r, i) - 1))/(r -1)));
        }

        else
        {
            printf("\nPor favor, selecione apenas 'a' ou 'g' para decidir a progressao desejada.");
        }
        
    return 0;
}