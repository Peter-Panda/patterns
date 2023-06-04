#include "main.h"
/**
 * pattern_six - inverted left half pyramid
 * @n: number of starts
 * Return: void
*/
void pattern_six(int n)
{
    /*
        *****
         ****
          ***
           **
            *
    */   

   int i,j;

   for (i = 0; i < n; i++)
   {
        for (j = 0; j < n; j++)
        {
            if(j < i)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
   }
}