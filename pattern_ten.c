#include "main.h"

/**
 * pattern_ten - diamond pattern
 * @n: number of starts
 * Return: void
*/

void pattern_ten(int n)
{
    /*
           *
          * *
         * * *
        * * * *
         * * *
          * *
           *
    */

   int i,j, k, tmp;

   for(i = 0; i < ((2 * n) - 1); i++)
   {
        if(i < n)
            tmp = 2 * (n - i) - 1;
        else
            tmp = 2 * (i - n + 1) + 1;
        for(j = 0; j < tmp; j++)
            printf(" ");
        for(k = 0; k < 2 * n - tmp; k++)
            printf("* ");
        printf("\n");
   }

}