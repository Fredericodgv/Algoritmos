#include <stdio.h>
#include <math.h>

typedef struct
{
    int x, y;
} ponto;

float distancia(ponto P, ponto O)
{
    float dist;

    dist = sqrt(pow(P.x - O.x, 2) + pow(P.y - O.y, 2));

    return dist;
}

int main()
{
    ponto P, O;

    scanf("%d", &P.x);
    scanf("%d", &P.y);

    scanf("%d", &O.x);
    scanf("%d", &O.y);

    printf("A distancia entre seus pontos eh: %.2f", distancia(P, O));

    return 0;
}