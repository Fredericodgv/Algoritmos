#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    printf("Calculadora desvio padrão\n\n");
    printf("Digite a quantidade de valores: ");
    
    int num;
    scanf("%d", &num);
    
    double media = 0;
    double *valores;
    valores = malloc(num);
    
    printf("\nDigite os valores:\n");
    for (int i=0; i<num; i++) {
        printf(" %do valor: ", i+1);
        scanf("%lf", &valores[i]);
        
        media += valores[i];
    }
    
    media = media / num;
    printf("\nMedia: %.9lf", media);
    
    int n = 0;
    double s, S = 0;
    while (n < num) {
        S += pow(media - valores[n], 2);
        n++;
    }
    S = sqrt(S / (num - 1));
    s = S / sqrt(num);

    printf("\nDesvio medio: %.9lf", S/num);   
    printf("\nDesvio padrão amostral: %.9lf", S);
    printf("\nDesvio padrão da media: %.9lf", s);
    
    int e = 0;
    while (s < 1) {
        media *= 10;
        s *= 10;
        e -= 1;
    }
    while (s > 10) {
        media /= 10;
        s /= 10;
        e += 1;
    }
    
    printf("\nMedida: (%d+-%d)E%d", (int) round(media), (int) round(s), e);

    free(valores);

    return 0;
}



