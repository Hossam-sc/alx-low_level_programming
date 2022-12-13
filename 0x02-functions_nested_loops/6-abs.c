#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _abs -  function that computes the absolute value of an integer
 * @n: number to test
 * Return: Always 0
 */
int _abs(int n)
{
	int n;

	if (n < 0)
	{
		return (abs(n));
	}

	else
	{
		return (n);
	}
}
