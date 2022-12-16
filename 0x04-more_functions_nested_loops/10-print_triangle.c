#include "main.h"
#include <stdio.h>

/**
 * print_triangle - function that print triangle
 *@size: the size of triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, n;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (n = 0; n < size; n++)
		{
			for (i = size - 1; i >= 0; i--)
			{
				_putchar(' ');
			}
			for (j = 1; j <= n; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
