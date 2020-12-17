#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   int n, reverse = 0;
   scanf("%d", &n);
   while (n != 0)
   {
      reverse = reverse * 10;
      reverse = reverse + n%10;
      n       = n/10;
   }

   printf("%d\n", reverse);

   return 0;
}
