#include "main.h"

/**
 * sqrt_check - function that checks for sqrt
 *@a : the intger
 *@b: number to find sqrt
 * Return: -1 Always
 */
int sqrt_check(int a, int b)
{
	if (a * a == b)
		return (a);
	else if (a * a > b)
		return (-1);
	return (sqrt_check(a + 1, b));
}

/**
 * _sqrt_recursion - the function that returns natural sqrt
 *@n: the integer
 * Return: 0 Always
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_check(1, n));
}
