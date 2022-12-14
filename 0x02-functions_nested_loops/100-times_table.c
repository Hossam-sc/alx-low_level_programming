#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the times table for n.
 * @n: The multiplication table requested.
 * Return: Nothing.
 */
void print_times_table(int n)
{
	int i, j, Mult;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');
				Mult = (i * j);
				if (Mult <= 9)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (Mult <= 99)
				{
					_putchar(' ');
					_putchar((Mult / 10) + '0');
				}
				else
				{
					_putchar((Mult / 100) + '0');
					_putchar((Mult / 10) + '0');
				}
			}
			_putchar((Mult % 10) + '0');
		}
		_putchar('\n');
	}
}



























