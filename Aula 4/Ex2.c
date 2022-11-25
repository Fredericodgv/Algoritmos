#include <stdio.h>

int main()
{
    int opcao;
    printf("Forma de pagamento:");
    printf("\n1 - A vista.");
    printf("\n2 - Cheque para trinta dias.");
    printf("\n3 - Em duas vezes.");
    printf("\n4 - Em tres vezes.");
    printf("\n5 - Em quatro vezes.");
    printf("\n6 - A partir de cinco vezes.\n");
    printf("\nEntre com sua opcao:");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("\nDesconto de 20%%");
        break;
    case 2 ... 4:
        printf("\nMesmo preco a vista");
        break;
    case 5:
        printf("\nJuros de 3%% ao mes");
        break;
    case 6:
        printf("\nJuros de 5%% ao mes");
        break;
    default:
        printf("\nOpcao invalida");
        break;
    }
}