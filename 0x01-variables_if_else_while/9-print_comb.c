#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print all the numbers from 0 to 9 with "," and " "
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar((n % 10) + '0');
		putchar(',');
		putchar(' ');
		if (n == 9)
			break;
	}

	putchar('\n');
	return (0);
}
