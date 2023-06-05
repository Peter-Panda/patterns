#include "main.h"
/**
 *  pattern_twelve - hourglass pattern
 * @n: number of starts
 * Return: void
*/
void pattern_twelve(int n)
{
    /*
        * * * *
         * * *
          * *
           *
          * *
         * * *
        * * * *  
    */

   int i, j, tmp, k;

    for (i = 0; i < 2 * n - 1; i++)
    {
        if ( i < n)
            tmp = 2 * i + 1;
        else
            tmp = 2 * (2 * n - i) - 3;
        
        for (j = 0; j < tmp; j++)
            printf(" ");
        for (k = 0; k < 2 * n - tmp; k++)
            printf("* ");
        printf("\n");
    }
}