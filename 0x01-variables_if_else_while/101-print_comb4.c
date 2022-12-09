#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print the combaination of three digits of all the numbers
 * from 0 to 9 with "," and " "
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int m;
	int l;

	for (n = 0; n <= 7; n++)
	{
		for (m = n + 1; m <= 8; m++)
		{
			for (l = m + 1; l <= 9; l++)
			{
				putchar((n % 10) + '0');
				putchar((m % 10) + '0');
				putchar((l % 10) + '0');
				if (n == 7 && m == 8 && l == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
