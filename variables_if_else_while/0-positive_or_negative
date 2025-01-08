#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
    int n;

    /* Seed the random number generator using the current time */
    srand(time(0));

    /* Generate a random number and store it in n */
    n = rand() - RAND_MAX / 2;

    /* Check if n is positive, negative, or zero, and print the appropriate message */
    if (n > 0)
    {
        printf("%d is positive\n", n);
    }
    else if (n == 0)
    {
        printf("%d is zero\n", n);
    }
    else
    {
        printf("%d is negative\n", n);
    }

    return (0);
}
