#include <stdio.h>
#include <stdlib.h>
#define TAM 500

void removeCarac(char str[], char c)
{
    int i, j;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == c)
        {
            for (j = i; str[j] != '\0'; j++)
            {
                str[j] = str[j + 1];
            }
            i--;
        }
    }
}

int main()
{
    char string[TAM];
    char c;

    fgets(string, TAM, stdin);
    scanf("%c", &c);

    removeCarac(string, c);

    puts(string);

    return 0;
}