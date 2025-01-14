	#include "main.h"

	/**
	* print_triangle - prints a triangle
	* @size: size of the triangle
	*/
	void print_triangle(int size)
	{
	if (size <= 0)
	_putchar('\n');
	else
	{
	for (int i = 1; i <= size; i++)
	{
	for (int j = 1; j <= size - i; j++)
	_putchar(' ');
	for (int j = 1; j <= i; j++)
	_putchar('#');
	_putchar('\n');
	}
	}
	}
