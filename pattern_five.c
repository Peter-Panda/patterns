#include "main.h"
/**
 * pattern_five - inverted right half pyramid
 * @n: number of starts
 * Return: void
*/
void pattern_five(int n)
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
        for (j = 0; j < n - i; j++)
            printf("*");
        printf("\n");
    }

}