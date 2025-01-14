		#include "main.h"

		/**
	* times_table - Prints the 9 times table starting from 0
	*
	* Description: This function prints the multiplication table of 9
	* starting from 0 up to 9. Each number is printed on a new line.
	*/

		void times_table(void)
		{
		int i, j;

		for (i = 0; i <= 9; i++)
		{
		for (j = 0; j <= 9; j++)
		{
		int product = i * j;

		if (j != 0)
		{
		_putchar(',');
		_putchar(' ');
		if (product < 10)
		_putchar(' ');
		}
		if (product >= 10)
		_putchar((product / 10) + '0');
		_putchar((product % 10) + '0');
		}
		_putchar('\n');
		}
		}
