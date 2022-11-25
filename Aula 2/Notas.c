#include <stdio.h>
 
int main()
{
    int valor1, valor2;
    int a, b, c, d, e;
    
    
    printf("PAGAMENTO SEM TROCO");
    scanf("%d", &valor1);
    scanf("%d", &valor2);
    printf("\n1o valor: R$%d", valor1);
    printf("\n2o valor: R$%d", valor2);
    
    a = valor1 / 100 + valor2 / 100;
    valor1 = valor1 % 100;
    valor2 = valor2 % 100; 
    b = valor1 / 50 + valor2 / 50;
    valor1 = valor1 % 50;
    valor2 = valor2 % 50; 
    c = valor1 / 20 + valor2 / 20;
    valor1 = valor1 % 20;
    valor2 = valor2 % 20; 
    d = valor1 / 10 + valor2 / 10;
    valor1 = valor1 % 10;
    valor2 = valor2 % 10; 
    e = valor1 / 5 + valor2 / 5;
    valor1 = valor1 % 5;
    valor2 = valor2 % 5;
    
    if (valor1 > 0) {e += 1;}
    else {}
    if (valor2 > 0) {e += 1;}
    else {}
    
    printf("\nNotas: %dxR$100;%dxR$50;%dxR$20;%dxR$10;%dxR$5.", a, b, c, d, e);
    
    
    return 0;
}