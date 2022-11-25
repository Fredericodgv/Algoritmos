#include <stdio.h>

int main()
{
    int x;
    int y;
    float divisao;


    printf("Insira o dividendo:");
    scanf("%d",&x);
    printf("\nInsira o divisor:");
    scanf("%d",&y);

    divisao = (float)x/y;
    printf("%f",divisao);

    return 0;

}