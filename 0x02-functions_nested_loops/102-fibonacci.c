#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * main - function that prints the first 50 Fibonacci numbers
 *
 * Return: 0 Always
 */
int main(void)
{
	int i;
	long a = 1, b = 2, r = 0;

	printf("1, 2");
	for (i = 1; i <= 48; i++)
	{
		r = a + b;
		a = b;
		b = r;
		printf(", %ld", r);
	}
	printf("\n");
	return (0);
}
