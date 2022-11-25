#include <stdio.h>
#define TAM 50

int main()
{
    float Arthur = 0;
    float Bruno = 0;
    float Carlos = 0;
    float Diego = 0;
    char nomes[TAM];
    float valor;
    int qtd, i, j, l;

    scanf("%d", &l);

    if (l < 0)
    {
        printf("ERRO: Quantidade Incorreta");
        return 0;
    }
    else
    {
        for (i = 0; i < l; i++)
        {
            for (j = 0; j < TAM; j++)
            {
                nomes[j] = '\0';
            }
            scanf("%d", &qtd);
            scanf("%f", &valor);
            getchar();
            scanf("%[^\n]s", nomes);

            if (qtd < 0)
            {
                printf("ERRO: Quantidade de itens incorreta");
                return 0;
            }
            else if (valor < 0)
            {
                printf("ERRO: Valor incorreto");
                return 0;
            }
            else
            {
                if (nomes[0] == 'A' && nomes[1] == 'r' && nomes[2] == 't' && nomes[3] == 'h' && nomes[4] == 'u' && nomes[5] == 'r')
                {
                    Arthur = Arthur + (float)(valor * qtd);
                    continue;
                }
                else if (nomes[0] == 'B' && nomes[1] == 'r' && nomes[2] == 'u' && nomes[3] == 'n' && nomes[4] == 'o')
                {
                    Bruno = Bruno + (float)(valor * qtd);
                    continue;
                }
                else if (nomes[0] == 'C' && nomes[1] == 'a' && nomes[2] == 'r' && nomes[3] == 'l' && nomes[4] == 'o' && nomes[5] == 's')
                {
                    Carlos = Carlos + (float)(valor * qtd);
                    continue;
                }
                else if (nomes[0] == 'D' && nomes[1] == 'i' && nomes[2] == 'e' && nomes[3] == 'g' && nomes[4] == 'o')
                {
                    Diego = Diego + (float)(valor * qtd);
                    continue;
                }
                else if (nomes[0] == 'T' && nomes[1] == 'o' && nomes[2] == 'd' && nomes[3] == 'o' && nomes[4] == 's')
                {
                    Arthur = Arthur + (float)(valor * qtd) / 4;
                    Bruno = Bruno + (float)(valor * qtd) / 4;
                    Carlos = Carlos + (float)(valor * qtd) / 4;
                    Diego = Diego + (float)(valor * qtd) / 4;
                    continue;
                }
                else
                {
                    printf("ERRO: Nome incorreto");
                    return 0;
                }
            }
        }

        printf("Total de Arthur: %.2f\n", Arthur);
        printf("Total de Bruno: %.2f\n", Bruno);
        printf("Total de Carlos: %.2f\n", Carlos);
        printf("Total de Diego: %.2f\n", Diego);
    }
}