#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * jack_bauer - function to print every minute of the day
 * @N,M: numbers for test
 * Return: 0 Always
 */
void jack_bauer(void)
{
	int N, M;

	for (N = 0; N <= 23; N++)
	{
		for (M = 0; M <= 59; M++)
		{
			_putchar((N / 10) + '0');
			_putchar((N % 10) + '0');
			_putchar(':');
			_putchar((M / 10) + '0');
			_putchar((M % 10) + '0');
			_putchar('\n');
		}
	}
}
