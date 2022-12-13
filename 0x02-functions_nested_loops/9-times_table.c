#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * times_table - function to print 9 times table, starting with 0
 * @N,M: numbers for test
 * Return: 0 Always
 */
void times_table(void)
{
	int N, M, Res;

	for (N = 0; N <= 9; N++)
	{
		_putchar('0');

		for (M = 1; M <= 9; M++)
		{
			_putchar(',');
			_putchar(' ');
			Res = N * M;
			if (Res <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((Res / 10) + '0');
			}
			_putchar((Res % 10) + '0');
		}
		_putchar('\n');
	}
}
