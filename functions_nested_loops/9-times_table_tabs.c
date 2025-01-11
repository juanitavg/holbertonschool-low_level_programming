#include "main.h"

/**
* times_table - prints the 9 times table starting with 0
*/
void times_table(void)
{
    int row, col, product;

    for (row = 0; row < 10; row++) {
        for (col = 0; col < 10; col++) {
            product = row * col;
            if (col != 0) {
                _putchar(',');
                _putchar(' ');
            }
            if (product < 10) {
                _putchar(' ');
            }
            _putchar(product + '0');
        }
        _putchar('\n');
    }
}

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    times_table();
    return (0);
}

