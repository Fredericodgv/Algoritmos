#include <stdio.h>

int main()
{
float a;
a = 100;
   while (a > 5)
   {
       printf("%.3f\n", a/=2);
   }
   return 0;
}