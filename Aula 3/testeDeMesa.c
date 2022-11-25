#include <stdio.h>
int funcao1(int a)
{
    int b = 0;
    printf(" a%d%d", a, b);
    b = a * a * a;
    printf(" b%d%d", a, b);
    return b / 2;
    printf(" c%d%d", a, b);
}
void funcao2()
{
    int a = funcao1(3), b = 2;
    printf(" d%d%d", a, b);
    a = a + funcao1(b);
    printf(" e%d%d", a, b);
    return;
    printf(" f%d%d", a, b);
}
int main()
{
    int a = 3, b = 5;
    printf(" g%d%d", a, funcao1(1));
    funcao2();
    printf(" h%d%d", a, b);
    return 0;
}