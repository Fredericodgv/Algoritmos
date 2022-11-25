#include <stdio.h>
#include <stdlib.h>

int impares(int n1, int n2)
{
    int cont;
    int i;

    cont = 0;

    if (n1 < n2)
    {
        for (i = n1; i <= n2; i++)
        {
            if(i%2 != 0)
            {
                cont++;
            }
            else{}
        }
        
    }
    else
    {
        for (i = n2; i <= n1; i++)
        {
            if(i%2 != 0)
            {
                cont++;
            }
            else{}
        }
    }
    
    return cont;
}

int main()
{
    int n1, n2;

    printf("Digite seu n1:");
    scanf("%d", &n1);
    printf("Digite seu n2:");
    scanf("%d", &n2);

    printf("%d", impares(n1, n2));

    return 0;
}