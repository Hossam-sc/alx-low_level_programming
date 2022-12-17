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
	int i, j;

	for (i = 1; i <= 50; i++)
	{
		if (i == 1)
			printf("%d, ", i);
		else if (i == 2)
			printf("%d, ", i);
		else
			j = (i - 2) + (i - 1);
		printf("%d, ", j);
	}
	printf("\n");
	return (0);
}
