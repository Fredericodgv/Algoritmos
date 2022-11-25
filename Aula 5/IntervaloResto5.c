#include <stdio.h>
#include <stdlib.h>

void intervalo(int n1, int n2, int x)  //Imprime os valores divisiveis por 5 no intervalo [n1, n2] ou [n2, n1]
{
    int i;

    if (n1 < n2)
    {
        for (i = n1; i <= n2; i++)
        {
            if(i%x == 5)
            {
                printf("%d ", i);
            }
            else{}
        }
        
    }
    else
    {
        for (i = n2; i <= n1; i++)
        {
            if(i%x == 5)
            {
                printf("%d ", i);
            }
            else{}
        }
    }
    
}

int main(){

    int n1, n2, x;

    printf("Digite seu n1:");
    scanf("%d", &n1);
    printf("Digite seu n2:");
    scanf("%d", &n2);
    printf("Digite seu x:");
    scanf("%d", &x);

    intervalo(n1, n2, x);

    return 0;
}