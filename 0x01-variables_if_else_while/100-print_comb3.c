#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print the combaination of two digits of all the numbers
 * from 0 to 9 with "," and " "
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int m;

	for (n = 0; n <= 8; n++)
	{
		for (m = n + 1; m <= 9; m++)
		{
			putchar((n % 10) + '0');
			putchar((m % 10) + '0');
			if (n == 8 && m == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
