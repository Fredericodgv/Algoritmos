#include <stdio.h>
#include <stdlib.h>
 
void premio(float custo, int vitorias)
{
    if(vitorias == 0)
    {
        printf("Premio de 0 porcento do valor total de R$%.2f", custo);
    }
    else if(vitorias >= 1 && vitorias <= 3)
    {
        printf("Premio de 10 porcento do valor total de R$%.2f", custo + 0.1 * custo);
    }
    else if(vitorias >= 4 && vitorias <= 6)
    {
        printf("Premio de 15 porcento do valor total de R$%.2f", custo + 0.15 * custo);
    }
    else
    {
        printf("Premio de 20 porcento do valor total de R$%.2f", custo + 0.2 * custo);
    }
}

int main(){
    float custo;
    int vitorias;
    scanf("%f", &custo);
    scanf("%d", &vitorias);
    premio(custo, vitorias);
	return 0;
}