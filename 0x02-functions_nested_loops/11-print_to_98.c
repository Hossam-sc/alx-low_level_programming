#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_to_98 - function to print all number within 98
 * @n: number for add
 * Return: 0 Always
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n <= 98; n++)
			printf("%d, ", n);
		printf("%d\n", 98);
	}
	else
	{
		for (n = n; n >= 98; n--)
			printf("%d, ", n);
		printf("%d\n", 98);
	}
}
