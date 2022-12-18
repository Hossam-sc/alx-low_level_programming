#include <stdio.h>
#include <math.h>

/**
 * main - function that finds and prints the sum of the
 *  even-valued terms in the Fibonacci sequence.
 *
 *  Return: 0 Always
 */
int main(void)
{
	int i;
	long a = 1, b = 2, r = 0, e = 2;

	while (r < 4000000)
	{
		r = a + b;
		a = b;
		b = r;
		if (r % 2 == 0)
		{
			e = r + e;
		}
	}
	printf("%ld\n", e);
	return (0);
}
