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
		for (M = 0; M <= 9; M++)
		{
			Res = (N * M);
			if (M != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (Res <= 10)
			{
				_putchar((Res / 10) + '0');
				_putchar((Res % 10) + '0');
			}
			else if (Res < 10 && M != 0)
			{
				_putchar(' ')
				_putchar((Res % 10) + '0');
			}
			else
			{
				_putchar((Res % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
