#include "main.h"

/**
 * print_number - function that prints an integer
 *@n: is the integer
 * Return: n
 */
void print_number(int n)
{
	int i = 10, j;
	unsigned int m;

	if (n >= 0 && n < 10)
	{
		_putchar(n + '0');
	}
	else if (n < 0 && n > -10)
	{
		_putchar('-');
		_putchar(n + '0');
	}
	else
	{
		if (n <= -10)
		{
			n = n * -1;
			_putchar('-');
		}
		m = n;
		while (m / i > 9)
		{
			i = i * 10;
		}
		while (i > 0)
		{
			j = m / i;
			m = m % i;
			_putchar(m + '0');
			i = i / 10;
		}
	}
}
