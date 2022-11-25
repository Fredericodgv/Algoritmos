#include <stdio.h>

float retorna_novoPreco(int codigo, float valor)
{
    float preco;

    printf("%f", valor);

    if(codigo >= 1 && codigo <= 4){
        preco = ((100 - 15) / 100) * valor; //cálculo do preço do produto com desconto
    }

    else if(codigo >= 5 && codigo <= 7){
        preco = ((100 - 35) / 100) * valor; //cálculo do preço do produto com desconto
    }

     else if(codigo >= 8 && codigo <= 10){
        preco = ((100 - 40) / 100) * valor; //cálculo do preço do produto com desconto
    }

     else if(codigo >= 11 && codigo <= 15){
        preco = ((100 - 55) / 100) * valor; //cálculo do preço do produto com desconto
    }

    else{

    }

    return preco;
}

int main()
{
    int codigo;
    float valor;
    float preo;
    
    scanf("%d", &codigo); //leitura do código
    scanf("%f", &valor); //leitura do preço do produto

    printf("R$ %.2f\n", retorna_novoPreco(codigo, valor)); //imprime o novo preço

    return 0;
}