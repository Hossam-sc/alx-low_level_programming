#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line
 *@n: is number of times
 * Renturn: void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 1; j < n; j++)
		{
			if (j > 1)
			{
				for (i = 1; i < n - 1; i++)
				{
					_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
