#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Maneira 1:");

    printf("\n*%-5d", 1111), printf("%4d*", 1111);

    printf("\n*%-5d", 111), printf("%4d*", 111);

    printf("\n*%-5d", 11), printf("%4d*", 11);

    printf("\n*%-5d", 1), printf("%4d*", 1);

    printf("\n*%-5d", 11), printf("%4d*", 11);

    printf("\n*%-5d", 111), printf("%4d*", 111);

    printf("\n*%-5d", 1111), printf("%4d*", 1111);

    printf("\n\nManeira 2:");

    printf("\n*%-5d1111*", 1111);

    printf("\n*%-6d111*", 111);

    printf("\n*%-7d11*", 11);

    printf("\n*%-8d1*", 1);

    printf("\n*%-7d11*", 11);

    printf("\n*%-6d111*", 111);

    printf("\n*%-5d1111*", 1111);

    printf("\n\nManeira 3:");

    printf("\n*%-5d%d*", 1111, 1111);

    printf("\n*%-6d%d*", 111, 111);

    printf("\n*%-7d%d*", 11, 11);

    printf("\n*%-8d%d*", 1, 1);

    printf("\n*%-7d%d*", 11, 11);

    printf("\n*%-6d%d*", 111, 111);

    printf("\n*%-5d%d*", 1111, 1111);

    printf("\n\nManeira 4:");

    printf("\n*%-5d%4d*", 1111, 1111);

    printf("\n*%-5d%4d*", 111, 111);

    printf("\n*%-5d%4d*", 11, 11);

    printf("\n*%-5d%4d*", 1, 1);

    printf("\n*%-5d%4d*", 11, 11);

    printf("\n*%-5d%4d*", 111, 111);

    printf("\n*%-5d%4d*", 1111, 1111);

    printf("\n\nManeira 5:");

    printf("\n*%-4d%5d*", 1111, 1111);

    printf("\n*%-4d%5d*", 111, 111);

    printf("\n*%-4d%5d*", 11, 11);

    printf("\n*%-4d%5d*", 1, 1);

    printf("\n*%-4d%5d*", 11, 11);

    printf("\n*%-4d%5d*", 111, 111);

    printf("\n*%-4d%5d*", 1111, 1111);

    printf("\n\nManeira 6:");

    int var;

    var = 1111;

    printf("\n*%-4d%5d*", var, var);

    var = 111;

    printf("\n*%-4d%5d*", var, var);

    var = 11;

    printf("\n*%-4d%5d*", var, var);

    var = 1;

    printf("\n*%-4d%5d*", var, var);

    var = 11;

    printf("\n*%-4d%5d*", var, var);

    var = 111;

    printf("\n*%-4d%5d*", var, var);

    var = 1111;

    printf("\n*%-4d%5d*", var, var);

    return 0;
}