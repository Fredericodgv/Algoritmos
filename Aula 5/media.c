#include <stdio.h>

float media(int n)
{
    float media, valor;
    valor = 0;
    media = 0;
    int i;

    for (i = 0; i < n; i++)
    {
        printf("Digite o valor%d:", i + 1);
        scanf("%f", &valor);
        media = media + valor;
    }
    media = (float)media / n;

    return media;
}

int main()
{
    int n;
    printf("Digite o valor n:");
    scanf("%d", &n);

    printf("Media dos %d valores: %.2f", n, media(n));
}