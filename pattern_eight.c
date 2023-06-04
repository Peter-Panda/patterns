#include "main.h"
/**
 * pattern_eight - rhombus pattern
 * @n: number of starts
 * Return: void
*/
void pattern_eight(int n)
{
    /* 
        * * * *
         * * * *
          * * * *
           * * * *
    */
  int i, j, k = 0;
  int cpt = 0;

  for (i = 0; i < n; i++)
  {
        k = 0;
        for(j = 0; j < n; j++)
        {
            while(k < cpt)
            {
                printf(" ");
                k++;
            }
            printf("* ");
        }
        cpt++;
        printf("\n");
  }
   
}