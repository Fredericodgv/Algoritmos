#include <stdio.h>
#define L 4
#define C 2

int main()
{
    float mat[L][C];
    int i, j;

    for (i = 0; i < L; i++)
        for (j = 0; j < C; j++)
            scanf("%f", &mat[i][j]);

    for (i = 0; i < L; i++)
    {
        for (j = 0; j < C; j++)
            printf("%.1f\t", mat[i][j]);
        printf("\n");
    }
        
    return 0;      
}