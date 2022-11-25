#include <stdio.h>
#include <stdlib.h>
 
int fatorial(int n)  //Calcula a expressao E = 1 + 1/1! + 1/2! + 1/3! + ... + 1/n!
{
  long int fat = 1;
  int i;

  for  (i = 1; i <= n; i++)
  {
    fat = fat * i;
  }
  
  return fat;
}

void expressao(int n)
{
  float E;
  int i;
  E = 1;

  for (i = 1; i <= n; i++)
  {
    E = E + (float)1/(fatorial(i));
  }

  printf("E = %f", E);
}

int main()
{
  int n;
  long int fat;
  scanf("%d", &n);

  fat = fatorial(n);
  printf("Fatorial: %d", fat);
  //expressao(n);

  return 0;
}