#include <stdio.h>

int main()
{
    float altura, massa, imc;

    printf("INDICE DE MASSA CORPORAL");
    printf("\nDigite o peso em kg:");
    scanf("%f", &massa);
    printf("Digite a altura em m:");
    scanf("%f", &altura);
    imc = massa / (altura * altura);
    printf("IMC:%f", imc);

    return 0;
}