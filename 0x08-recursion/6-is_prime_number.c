#include "main.h"

/**
 * is_prime_number - function to check prime numbers
 *@n: the integer
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (prime_checker(n, n / 2) > 0)
		return (1);
	return (0);
}

/**
 * prime_checker - checks for prime
 *@n: input check
 *@i: n/2,then passes to i - 1, checks if greater than 0
 * Return: prime
 */
int prime_checker(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (prime_checker(n, i - 1));
}
