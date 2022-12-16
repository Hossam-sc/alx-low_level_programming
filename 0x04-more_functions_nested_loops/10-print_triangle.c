#include "main.h"
#include <stdio.h>

/**
 * print_triangle - function that print triangle
 *@size: the size of triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = size; i > 0; i--)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar(' ');
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
