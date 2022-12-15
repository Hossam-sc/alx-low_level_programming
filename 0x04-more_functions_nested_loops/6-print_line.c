#include "main.h"
#include <stdio.h>

/**
 * print_line - function that print straight line
 * @n: is the number
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		if (i <= 0)
			_putchar('\n');
		else
			_putchar('_');
	_putchar('\n');
}
