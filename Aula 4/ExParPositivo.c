#include <stdio.h>
#include <stdlib.h>

//Faça uma função que receba como parâmetro um valor inteiro. Esta função deve retornar 1 se o valor recebido como parâmetro for par e positivo e, caso contrário, a função deve retornar 0.
//Crie um programa que chame a função criada e imprima a mensagem “Conjunto Z*+ e par” caso o valor retornado pela função seja igual a 1, caso contrário o programa deve imprimir “Valor invalido”.

int parPositivo(int valor)
{
    if (valor % 2 == 0 && valor > 0)
        return 1;
    else
        return 0;
}

int main()
{
    int valor, result;
    printf("Digite o valor inteiro desejado:");
    scanf("%d", &valor);
    result = parPositivo(valor);

    if(result == 1)
        printf("Conjunto Z*+ e par");
    else    
        printf("Valor Invalido");
    return 0;
}