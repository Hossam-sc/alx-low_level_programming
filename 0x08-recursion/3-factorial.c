#include "main.h"

/**
 * factorial(int n) - Entery point
 *@n : integr
 * Return: 0 Always
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
