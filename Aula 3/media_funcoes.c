#include <stdio.h>

float notaminima (float x, float y)
{
    float res;
    res = (4 * 5 - x - y)/2;
    return res; 
}

int main()
{
    float p1, p2, notanecessaria;
    printf("Nota da prova 1:");
    scanf("%f", &p1);
    printf("Nota da prova 2:");
    scanf("%f", &p2);    
    notanecessaria = notaminima (p1, p2);
    printf("Voce precisa tirar %.2f na prova 3 para ser aprovado", notanecessaria);

    
    return 0; 
}