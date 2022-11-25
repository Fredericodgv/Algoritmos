#include <stdio.h>
float
funcao (float x)
{

  int cont;
  float n, soma = 0;
  for (cont = 0; x > cont; cont++)
    {
      scanf ("%f", &n);
      soma = soma + n;
    }
  return soma / x;
}

int
main ()
{
  int x;
  float b;
  scanf ("%d", &x);
  b = funcao (x);
  printf ("Media dos %d valores: %.2f" ,x, b);

  return 0;
}