#include <stdio.h>

int main()
{
    int horas;
    int min;
    int seg;
    int dias;

    printf("Insira quantos segundos voce deseja converter:");
    scanf("%d", &seg);

    min = seg/60;
    seg = seg%60;

    horas = min/60;
    min = min%60;

    dias = horas/24;
    horas = horas%24;

    printf("%d:%d:%d:%d\nou \n%d dias, %d horas, %d minutos e %d segundos", dias, horas, min, seg, dias, horas, min, seg);
}