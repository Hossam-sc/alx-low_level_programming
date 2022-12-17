#include "main.h"
#include <math.h>
#include <stdio.h>

/**
 * main - function that prints the sum of all the multiples
 *  of 3 or 5 below 1024
 *
 *  Return: 0 Always
 */
int main(void)
{
	int i, j = 0;

	for (i = 1; i <= 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			j = j + i;
		}
	}
	printf("%d\n", j)
	return (0);
}
