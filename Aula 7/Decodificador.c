#include <stdio.h>

void decod(char str[], int dec)
{
    int i;   

    for (i = 0; str[i] != '\0'; i++)
    {
        str[i] -= dec;
        if(str[i] < 'A')
        {
            str[i] += 26;
        }
    }

    puts(str);    
}

int main()
{
    char frase[50];
    int N, dec, i;

    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        getchar();
        scanf("%[^\n]s", frase);
        getchar();
        scanf("%d", &dec);
        decod(frase, dec);
    }
    
    return 0;
}

