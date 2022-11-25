#include <stdio.h>
#include <string.h>//necessário para strcmp
int main (void)
{
  char str1[9] = "fgeyuhjg";
  char str2[9] = "abd";
  int retorno;
  
  retorno = strcmp(str1, str2);
  printf("retorno = %d\n", retorno);
  //mostra o retorno da função strcmp  
  
  return 0;
}