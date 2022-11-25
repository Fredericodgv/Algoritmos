#include <stdio.h>
#include <stdlib.h>

void intervalo (int n1, int n2)
{
  int x;

  if (n1 < n2)
    {
      x = n1;
      while (x <= n2)
	{
	  printf ("%d ", x);
	  x++;
	}
    }
  else if (n1 > n2)
    {
      x = n2;
      while (x <= n1)
	{
	  printf ("%d ", x);
	  x++;
	}
    }
  else
    {
      printf ("%d", n1);
    }
}

int main ()
{
  int n1, n2;
  printf ("Informe o valor n1:");
  scanf ("%d", &n1);
  printf ("\nInforme o valor n2:");
  scanf ("%d", &n2);

  intervalo (n1, n2);

  return 0;
}