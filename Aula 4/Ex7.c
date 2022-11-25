#include <stdio.h>

void classificaNadador(int idade)
{
    if(idade >= 5 && idade <= 7)
        printf("Categoria: infantil A.");
    else if(idade >= 8 && idade <= 10)
        printf("Categoria: infantil B.");
    else if(idade >= 11 && idade <= 13)
        printf("Categoria: juvenil A.");
    else if(idade >= 14 && idade <= 17)
        printf("Categoria: juvenil B.");
    else if(idade >= 18 && idade <= 30)
        printf("Categoria: adulto.");
    else if(idade > 30)  
        printf("Categoria: senior.");
}

int main(void)
{
    int idade;
    printf("Insira a idade:");
    scanf("%d", &idade);
    classificaNadador(idade);
    return 0;
}