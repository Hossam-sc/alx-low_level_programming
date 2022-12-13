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
	int N, M;

	for (N = 0; N <= 9; N++)
	{
		for (M = 0; M <= 9; M++)
		{
			_putchar((N * M) + '0');
			_putchar('\n');
			if (N == 9 && M == 8)
				continue;
			_putchar(',');
			_putchar(' ');
		}
	}
}
