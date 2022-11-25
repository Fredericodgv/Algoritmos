#include <stdio.h>

int main()
{
    int x, i, cont;
    x = 0;
    cont = 0;

    while(x <= 0)
    {
        printf("Digite seu valor x:");
        scanf("%d", &x);
    }
    
    for(i = 1; i <= x; i++)
    {
        if(x % i == 0)
        {
            cont++;
        }          
    }

    if(cont == 2 && x >= 2)
    {
        printf("O numero %d e primo.", x);
    }
    else
    {
        printf("O numero %d nao e primo.", x);
    }    

    return 0;
}