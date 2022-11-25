#include <stdio.h>

void criptografar(char str[], int k)
{
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        str[i] += k;
    }
}

int main()
{
    char frase[100];
    int k;

    scanf("%[^\n]s", frase);
    scanf("%d", &k);

    criptografar(frase, k);

    printf("Mensagem criptografada: ");
    puts(frase);

    return 0; 
}