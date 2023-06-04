#include "main.h"

/**
 * pattern_eleven - Pascal triangle
 * @n: number of starts
 * Return: void
*/

void pattern_eleven(int n)
{
    /*
           1
          1 1
         1 2 1
        1 3 3 1
    */

   int i, j, k, tmp;

   for(i = 1; i <= n; i++)
   {
        for (j = 0; j < n - i; j++)
            printf(" ");
        
        tmp = 1;

        for (k = 1; k <= i; k++)
        {
            printf("%d ", tmp);
            tmp = tmp * (i - k) / k;
        }
        printf("\n");
   }


}