#include <stdio.h>
#include <stdlib.h>
#define TAM 500

typedef struct
{
    char nome[TAM];
    float potencia;
    int horas;
    float consumo;
    float consumoRelativo;
} Eletrodomestico;

int main()
{
    Eletrodomestico eletD[7];
    int dias, i;
    float consumoTotal = 0;

    for (i = 0; i < 7; i++)
    {
        scanf("%[^\n]s", eletD[i].nome);
        scanf("%f", &eletD[i].potencia);
        scanf("%d%*c", &eletD[i].horas);
    }
    
    scanf("%d", &dias);

    for (i = 0; i < 7; i++)
    {
        eletD[i].consumo = eletD[i].potencia * eletD[i].horas * dias;
        consumoTotal += eletD[i].consumo;
    }

    for (i = 0; i < 7; i++)
    {
        eletD[i].consumoRelativo = (eletD[i].consumo / consumoTotal) * 100;
    }
    
    printf("Consumo total: %f\n", consumoTotal);
    printf("Consumo relativo:\n");
    for (i = 0; i < 7; i++)
    {
        printf("%s: %f%%\n", eletD[i].nome, eletD[i].consumoRelativo);
    }
    
    return 0;
}