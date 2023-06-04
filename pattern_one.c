#include "main.h"

/**
 * pattern_one - Entry point
 * @n: number of stars you want to print on each colum and line
 * Return: void
*/

void pattern_one(int n)
{
    /*
        *****
        *****
        *****
        *****
        *****
    */
    int i,j;

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
            printf("*");
        printf("\n");
    }
}