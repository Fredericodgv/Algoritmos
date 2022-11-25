#include <stdio.h>
#define Compromissos 3

typedef struct
{
    int hora;
    int min;
    int seg;
} Horario;

typedef struct
{
    int dia;
    int mes;
    int ano;
} Data;

typedef struct
{
    Data data;
    Horario horario;
    char nome[100];
} compromisso;

int main() 
{
    int i;
    compromisso vet[Compromissos];

    for (i = 0; i < Compromissos; i++)
    {
        scanf("%d %d %d", &vet[i].data.dia, &vet[i].data.mes, &vet[i].data.ano);
        scanf("%d %d %d", &vet[i].horario.hora, &vet[i].horario.min, &vet[i].horario.seg);
        scanf("%[^\n]s%*c", vet[i].nome); 
    }

    for (i = 0; i < Compromissos; i++)
    {
        printf("No dia %d/%d/%d as %d:%d:%d voce tem o compromisso:%s\n", vet[i].data.dia, vet[i].data.mes, vet[i].data.ano, vet[i].horario.hora, vet[i].horario.min, vet[i].horario.seg, vet[i].nome);
    } 
    
    return 0;
}