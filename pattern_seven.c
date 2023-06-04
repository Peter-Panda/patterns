#include "main.h"
/**
 * pattern_seven - inverted full pyramid
 * @n: number of starts
 * Return: void
*/
void pattern_seven(int n)
{
    /* 
        * * * * *
         * * * *
          * * *
           * *
            *
    */
   int i, j;

   for (i = 0; i < n; i++)
   {
        for (j = 0; j < n ; j++)
        {
            if(j < i)
                printf(" ");
            else
                printf("* ");
        }
        printf("\n");
   }
   
}