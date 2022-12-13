#include "main.h"

/**
 * print_sign - function that prints the sign of a number
 * @n: number to test
 * Return: 1 if positive number ,-1 if negative number ,else 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	
}
