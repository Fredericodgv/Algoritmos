#include <stdio.h>
#include <math.h>

float volume(float larg, float alt, float prof) //Funcao para calcular o volume da caixa d'agua
{
    float vol;
    vol = larg * alt * prof;
    return vol;
}

float espessura(float e) //Funcao para calcular a espessura necessaria para a caixa d'agua
{
    e = ceil(e - 1);
    e = 0.3 * e + 0.8;
    return e;
}

float valorsuperficie(float x, float y, float e) //Funcao para calcular o valor de cada superficie da caixa d'agua, "paredes" e "fundo" dela
{
    float valor;
    valor = 45 * x * y * e;
    return valor;
}

float valorfinal(float largura, float altura, float profundidade) //Funcao com os valores necessarios para os calculos das outras funcoes
{
    float vol, esp, superficie1, superficie2, superficie3, superficie4, superficie5, preco;

    esp = espessura(volume(largura, altura, profundidade));

    superficie1 = valorsuperficie(largura, altura, esp);

    superficie2 = valorsuperficie(profundidade, altura, esp);

    superficie3 = valorsuperficie(largura, altura, esp);

    superficie4 = valorsuperficie(profundidade, altura, esp);

    superficie5 = valorsuperficie(largura, profundidade, esp);

    preco = superficie1 + superficie2 + superficie3 + superficie4 + superficie5;

    return preco;
}

int main() //Funcao principal, recebe os valores desejados
{
    float largura, altura, profundidade, preco;
    printf("Largura:");
    scanf("%f", &largura);
    printf("Altura:");
    scanf("%f", &altura);
    printf("Profundidade:");
    scanf("%f", &profundidade);

    preco = valorfinal(largura, altura, profundidade);

    printf("Preco: R$%.2f", preco);
}