#include "main.h"

/**
 * prime_checker - function to check prime numbers
 *@a: the integer
 *@b: integer
 * Return: 0 or 1
 */
int prime_checker(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	return (prime_checker(a, b + 1));
}

/**
 * is_prime_number - that function checks the prime number
 *@n: number
 * Return: 0 Always
 */
int is_prime_number(int n)
{
	return (prime_checker(n, 2));
}
