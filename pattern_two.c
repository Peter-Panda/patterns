#include "main.h"
/**
 * pattern_two - right half pyramid
 * @n: number of starts
 * Return: void
*/
void pattern_two(int n)
{
    /*
        *
        **
        ***
        ****
        *****
        ******
    */

   int i,j;

   for(i = 0; i < n; i++)
   {
        for (j = 0; j <= i; j++)
            printf("*");
        printf("\n");
   }
}