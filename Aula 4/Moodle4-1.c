#include <stdio.h>

int main()
{
    float a, b;
    char operacao;

   
    scanf("%f%f", &a, &b);
   
    scanf("%*c%c", &operacao);

    switch (operacao)
    {
    case '+':
        printf("%.1f %c %.1f = %.1f", a, operacao, b, a + b);
        break;
    case '-':
        printf("%.1f %c %.1f = %.1f", a, operacao, b, a - b);
        break;
    case '*':
        printf("%.1f %c %.1f = %.1f", a, operacao, b, a * b);
        break;
    case '/':
        printf("%.1f %c %.1f = %.1f", a, operacao, b, a / b);
        break;
    }
    return 0;
}