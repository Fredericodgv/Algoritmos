#include <stdio.h>

int main() {
    int num;
    float x, y;
    
    printf("Número de pontos: ");
    scanf("%d", &num);
    printf("\n");
    
    int n = 0;
    float SXY = 0, SX = 0, SY = 0, SX2 = 0;
    while (n < num) {
        printf("Ponto %d (x y): ", n+1);
        scanf("%f %f", &x, &y);
        
        SXY += x * y;
        SX += x;
        SY += y;
        SX2 += x * x;
        
        n++;
    }
    
    float M, N;
    M = (num * SXY - SX * SY) / (num * SX2 - SX * SX);
    N = y - M * x;
    printf("\ny = %.4fx + %.4f", M , N);
    
    float y1, y2, x1 = 0, x2 = x;
    y1 = M * x1 + N;
    y2 = M * x2 + N;
    printf("\nP1 = (%.4f, %.4f)", x1, y1);
    printf("\nP2 = (%.4f, %.4f)", x2, y2);
}