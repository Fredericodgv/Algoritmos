#include <stdio.h>
#include <stdlib.h>
#define TAM 500

void tiraPulaLinha(char str[])
{
    int i;
    for (i = 0; str[i] != '\0'; i++){}
    str[i - 1] = '\0';  
}

typedef struct
{
    char nome[TAM];
    char rua[TAM];
    char numero[TAM];
    char bairro[TAM];
    char complemento[TAM];
    char cep[TAM];
    char cidade[TAM];
    char MG[TAM];
    char telefone1[TAM];
    char telefone2[TAM];
} informacoes;

int main()
{
    informacoes dados[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        fgets(dados[i].nome, TAM, stdin);
        fgets(dados[i].rua, TAM, stdin);
        fgets(dados[i].numero, TAM, stdin);
        fgets(dados[i].bairro, TAM, stdin);
        fgets(dados[i].complemento, TAM, stdin);
        fgets(dados[i].cep, TAM, stdin);
        fgets(dados[i].cidade, TAM, stdin);
        fgets(dados[i].MG, TAM, stdin);
        fgets(dados[i].telefone1, TAM, stdin);
        fgets(dados[i].telefone2, TAM, stdin);
    }

    for (i = 0; i < 3; i++)
    {
        tiraPulaLinha(dados[i].nome);
        tiraPulaLinha(dados[i].rua);
        tiraPulaLinha(dados[i].numero);
        tiraPulaLinha(dados[i].bairro);
        tiraPulaLinha(dados[i].complemento);
        tiraPulaLinha(dados[i].cep);
        tiraPulaLinha(dados[i].cidade);
        tiraPulaLinha(dados[i].MG);
        tiraPulaLinha(dados[i].telefone1);
        tiraPulaLinha(dados[i].telefone2);
    }

    for (i = 0; i < 3; i++)
    {

        puts(dados[i].nome);
        puts(dados[i].rua);
        puts(dados[i].numero);
        puts(dados[i].bairro);
        puts(dados[i].complemento);
        puts(dados[i].cep);
        puts(dados[i].cidade);
        puts(dados[i].MG);
        puts(dados[i].telefone1);
        puts(dados[i].telefone2);
    }

    return 0;
}