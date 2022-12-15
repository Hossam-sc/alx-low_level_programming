#include "main.h"
#include <stdio.h>

/**
 * more_numbers - function for print 10 times the digit from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, j, Tens, Units;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			Units = j % 10;
			Tens = j / 10;
			if (j > 9)
			{
				_putchar(Tens + '0');
			}
			_putchar(Units + '0');
		}
		_putchar('\n');
	}
}
