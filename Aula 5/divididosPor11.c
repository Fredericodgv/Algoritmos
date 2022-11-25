#include <stdio.h>

int main()
{
    int n1, n2, x;
    printf("Digite o valor de n1:");
    scanf("%d", &n1);
    printf("Digite o valor de n2:");
    scanf("%d", &n2);

    if (n1 < n2)
    {
        x = n1;
        while (x <= n2)
        {
            if (x % 11 == 5)
            {
                printf("%d\n", x);
            }
            else
            {
            }
            x++;
        }
    }
    else
    {
        x = n2;
        while (x <= n1)
        {
            if (x % 11 == 5)
            {
                printf("%d\n", x);
            }
            else
            {
            }
            x++;
        }
    }

    return 0;
}