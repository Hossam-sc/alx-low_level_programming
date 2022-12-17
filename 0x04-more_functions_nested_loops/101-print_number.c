#include "main.h"

/**
 * function that prints an integer
 *@n: that digit for print
 * Return: void
 */
void print_number(int n)
{
	int i, j;
	if (n < 0)
	{
		for (n = -1; n > -10000; n--)
		{
			if (n >= -1 && n > -10)
			{
				_putchar('-');
				_putchar((n % 10) + '0');
			}
			else if (n <= -10 && n > -100)
			{
				_putchar('-');
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			else if (n <= -100 && n > -1000)
			{
				_putchar('-');
				_putchar((n / 100) + '0');
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			else if (n <= -1000 && n > -10000)
			{
				_putchar('-');
				_putchar((n / 1000) + '0');
				_putchar((n / 100) + '0');
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
		}
		_putchar('\n');
	}
	else
	{
		for (n = 0; n < 10000; n++)
		{
			if (n >= 0 && n < 10)
			{
				_putchar((n % 10) + '0');
			}
			else if (n >= 10 && n < 100)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			else if (n >= 100 && n < 1000)
			{
				_putchar((n / 100) + '0');
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			else if (n >= 1000 && n < 10000)
			{
				_putchar((n / 1000) + '0');
				_putchar((n / 100) + '0');
				_putchar((n / 10) + '0');
				_putchar((n % 10) +'0');
			}
			_putchar('\n');
		}
	}
}
