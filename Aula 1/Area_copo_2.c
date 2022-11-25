#include <stdio.h>

int main()
{
    float pi;
    float volume;
    float altura;
    float diametro;
    float raio;
    
    pi = 3.1415926535;
       
    printf("Insira a altura:");
    scanf("%f",&altura);
    printf("insira o diametro:");
    scanf("%f",&diametro);

    raio = diametro/2;
    volume = (pi * raio * raio * altura);
           
    printf("Um cilindro de %.f de diametro e %.f de altura possui volume de %f",diametro, altura, volume);

    return 0;
}