#include "main.h"
#include <stdio.h>

/**
 * print_triangle - function that print triangle
 *@size: the size of triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, n, dis;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		dis = size - 1;
		for (n = 0; n < size; n++)
		{
			i = 0;
			while (i < (dis - n))
			{
				_putchar(' ');
				i++;
			}
			j = size - i;
			while (j > 0)
			{
				_putchar('#');
				j--;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
