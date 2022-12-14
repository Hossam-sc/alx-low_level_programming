#include <math.h>
#include <stdio.h>

/**
 * main - function that finds and prints the first 98 Fibonacci numbers
 *
 * Return: 0 Always
 */
int main(void)
{
	int i;
	float r = 0, a = 1, b = 2;

	printf("1, 2");
	for (i = 1; i <= 96; i++)
	{
		r = a + b;
		a = b;
		b = r;
		printf(", %.0f", r);
	}
	putchar('\n');
	return (0);
}
