#include <stdio.h>

float auxilioFuncionario (int dependentes)
{
    int j;
    int idade;
    float auxilo;
    auxilo = 0;
    
    j = 0;
    while (j < dependentes)
    {
        //printf ("Digite a idade do proximo dependente: ");
        scanf ("%d", &idade);
        if (idade < 18)
        {
            auxilo = auxilo + 60;
        }
        j++;
    }
    return auxilo;
}


int main()
{
    int dep;
    int i;
    float auxilio;

    i = 0;

    while(i < 30)
    {
        scanf("%d", &dep);
        auxilio = auxilioFuncionario(dep);
        printf("valor total do auxilio: R$%.2f", auxilio);
        i++;
    }
    

    return 0;
}