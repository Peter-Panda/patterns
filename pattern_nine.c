#include "main.h"

/**
 * pattern_nine - floyd's triangle
 * @n: number of starts
 * Return: void
*/

void pattern_nine(int n)
{
    /*
        1
        2 3
        4 5 6
        7 8 9 10
    */
    int i,j, tmp = 1;

    for (i = 0; i < n; i++)
    {
        for(j = 0; j <= i; j++)
        {
            printf("%d ", tmp);
            tmp++;
        }
        printf("\n");
    }
}