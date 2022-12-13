#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_last_digit - function to print last digit
 * @n: number for test
 * Return: 0 Always
 */
int print_last_digit(int n)
{
	int M = abs(n % 10);

	_putchar(M + '0');
	return (M + '0');
}
