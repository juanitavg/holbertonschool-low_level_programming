#include "main.h"
#include <stdio.h>

/**
 * times_table - Prints the 9 times table starting with 0
 */
void times_table(void)
{
    int i, j, result;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            result = i * j;
            if (j > 0)
                printf(", ");
            if (result < 10)
                printf(" ");
            printf("%d", result);
        }
        printf("\n");
    }
}