#include "main.h"
/**
 * pattern_four - full pyramid
 * @n: number of starts
 * Return: void
*/
void pattern_four(int n)
{
    /* 
             *
            * *
           * * *
          * * * *
         * * * * * 
    */

   int i,j;

   for (i = 0; i < n; i++)
   {
        for (j = n - 1; j >= 0; j--)
        {
            if(j <= i)
                printf("* ");
            else
                printf(" ");
        }
        printf("\n");
   }



      


}