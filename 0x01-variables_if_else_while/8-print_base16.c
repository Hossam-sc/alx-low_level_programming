#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print the numbers of base 16 in lowercase
 *
 * Return: Always 0.
 */
int main(void)
{
	char ch;
	int n;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');

	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
